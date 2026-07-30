#pragma once
#include <vector>
#include "nucleus_interface.h"

template<size_t N>
struct FixedString
{
    char data[N];

    constexpr FixedString(const char (&str)[N])
    {
        std::copy_n(str, N, data);
    }
};

// Using type erasure to be able to store chains of different HookChain types by storing them as HookChainBase instead
template<typename Ret, typename... Args>
struct HookChain : HookChainBase
{
    using Function = Ret(*)(Args...);

    std::vector<Function> hooks;
    Function original = nullptr;

    const char* name = nullptr;
};

struct HookContextBase
{
    virtual ~HookContextBase() = default;
};

template<typename Ret, typename... Args>
struct HookContext : HookContextBase
{
    HookChain<Ret, Args...>* chain{};
    size_t index{0};

    Ret InvokeNext(Args... args)
    {
        if(index < chain->hooks.size())
        {
            auto hook = chain->hooks[index++];
            printf("HookChain %s: Invoking hook at %p\n", chain->name, hook);
            Ret result = hook(args...);
            printf("HookChain %s: Returning from hook at %p\n", chain->name, hook);
            return result;
        }

        auto original = chain->original;
        printf("HookChain %s: Invoking original at %p\n", chain->name, original);
        Ret result = original(args...);
        printf("HookChain %s: Returning from original at %p\n", chain->name, original);
        return result;
    }
};

template<typename... Args>
struct HookContext<void, Args...> : HookContextBase
{
    HookChain<void, Args...>* chain{};
    size_t index{0};

    void InvokeNext(Args... args)
    {
        if(index < chain->hooks.size())
        {
            auto hook = chain->hooks[index++];
            printf("HookChain %s: Invoking hook at %p\n", chain->name, hook);
            hook(args...);
            printf("HookChain %s: Returning from hook at %p\n", chain->name, hook);
        }
        else
        {
            auto original = chain->original;
            printf("HookChain %s: Invoking original at %p\n", chain->name, original);
            original(args...);
            printf("HookChain %s: Returning from original at %p\n", chain->name, original);
        }
    }
};

template<typename Ret, typename... Args>
Ret Next(Args... args)
{
    auto ctx =
        static_cast<HookContext<Ret, Args...>*>(nucleus->GetCurrentContext());

    return ctx->InvokeNext(args...);
}

template<FixedString name, typename Ret, typename... Args>
struct Dispatcher
{
    static HookChain<Ret, Args...>* chain;

    static Ret Dispatch(Args... args)
    {
        printf("Dispatching HookChain %s\n", chain->name);

        HookContext<Ret, Args...> context;

        context.chain = chain;
        context.index = 0;

        nucleus->SetCurrentContext(&context);

        Ret result = Next<Ret>(args...);

        nucleus->SetCurrentContext(nullptr);

        return result;
    }
};
template<FixedString name, typename Ret, typename... Args>
HookChain<Ret, Args...>* Dispatcher<name, Ret, Args...>::chain = nullptr;

template<FixedString name, typename... Args>
struct Dispatcher<name, void, Args...>
{
    static HookChain<void, Args...>* chain;

    static void Dispatch(Args... args)
    {
        printf("Dispatching HookChain %s\n", chain->name);

        HookContext<void, Args...> context;

        context.chain = chain;
        context.index = 0;

        nucleus->SetCurrentContext(&context);

        Next<void>(args...);

        nucleus->SetCurrentContext(nullptr);
    }
};
template<FixedString name, typename... Args>
HookChain<void, Args...>* Dispatcher<name, void, Args...>::chain = nullptr;

template<typename Chain>
Chain* GetOrCreateChain(const char* name)
{
    printf("GetOrCreateChain: %s\n", name);

    auto it = nucleus->chains.find(name);

    if(it != nucleus->chains.end())
    {
        printf("Getting existing chain for %s\n", name);
        return static_cast<Chain*>(it->second);
    }

    printf("Existing chain not found, creating new chain for %s\n", name);

    auto chain = new Chain();

    chain->name = name;
    nucleus->chains[name] = chain;

    return chain;
}

template<FixedString name, typename Ret, typename... Args>
void Hook(
    Ret(*function)(Args...)
)
{
    using Chain = HookChain<Ret, Args...>;
    using Disp = Dispatcher<name, Ret, Args...>;

    auto chain = GetOrCreateChain<Chain>((const char*)name.data);

    chain->hooks.push_back(function);

    if(!chain->original)
    {
        Disp::chain = chain;

        chain->original =
            reinterpret_cast<Ret(*)(Args...)>
            (nucleus->CreateHook(
                (const char*)name.data,
                static_cast<void*>(&Disp::Dispatch)
            ));
    }
}
