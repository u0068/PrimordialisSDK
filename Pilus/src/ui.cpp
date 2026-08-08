#include <deque>
#include "modloader.h"

std::string WrapText(const sf::Text& text, std::string& string, int max)
{
    std::string nstring;
    sf::Text temp = text;
    temp.setString(nstring);
    for (int i = 0; i < string.length(); i++)
    {
        nstring.append(string.substr(i, 1));
        temp.setString(nstring);
        if (temp.getLocalBounds().size.x > max)
        {
            nstring.insert(nstring.length() - 1, "\n");
        }
        temp.setString(nstring);
    }
    return nstring;
}

void ModManager::Render()
{
    sf::VertexArray bline(sf::PrimitiveType::Lines, 2);

    window->clear(sf::Color::Black);
    if (mod_selected == -1)
    {
        std::deque<std::string> trunc_log;

        int maxlines = 12;
        std::istringstream sstream(error_log);
        std::string line;
        while (std::getline(sstream, line))
        {
            trunc_log.push_back(line);
            if (trunc_log.size() > maxlines)
                trunc_log.pop_front();
        }
        sstream = std::istringstream(log);
        sstream.seekg(0);
        while (std::getline(sstream, line))
        {
            trunc_log.push_back(line);
            if (trunc_log.size() > maxlines)
                trunc_log.pop_front();
        }

        std::string flog;
        for (const auto & i : trunc_log)
        {
            flog.append(i);
            flog.append("\n");
        }

        flog = WrapText(*text, flog, 400);
        flog = "Pilus Modloader\n" + flog;
        text->setString(flog);

        text->setPosition({ 400, 255 });

        window->draw(*text);

        bline[0].position = { 400, 255 };
        bline[1].position = { 800, 255 };

        window->draw(bline);
    }
    else
    {
        for (int i = 0; i < mods[mod_selected].config.size(); i++)
        {
            std::string configline;

            if (i == config_selected)
                configline = "(" + mods[mod_selected].config[i].name + "): " + config_temp;
            else
            {
                configline = mods[mod_selected].config[i].name + ": ";

                if (std::holds_alternative<double>(mods[mod_selected].config[i].value))
                    configline.append(std::to_string(std::get<double>(mods[mod_selected].config[i].value)));
                else if (std::holds_alternative<bool>(mods[mod_selected].config[i].value))
                {
                    if (std::get<bool>(mods[mod_selected].config[i].value))
                        configline.append("Enabled");
                    else
                        configline.append("Disabled");
                }
                else if (std::holds_alternative<std::string>(mods[mod_selected].config[i].value))
                    configline.append(std::get<std::string>(mods[mod_selected].config[i].value));
            }
            if (i % 2 == 1)
            {
                sf::RectangleShape brighterrect;
                brighterrect.setSize({ 400, 50 });
                brighterrect.setFillColor(sf::Color(255, 255, 255, 10));
                brighterrect.setPosition({ 400, 50 * i + cscroll });
                window->draw(brighterrect);
            }

            text->setString(configline);
            text->setPosition({ 400, 50 * i + cscroll - text->getLocalBounds().size.y / 2 + 25 });
            window->draw(*text);
        }
    }

    bline[0].position = {400, 0};
    bline[1].position = {400, 560};

    window->draw(bline);

    if (mod_hover != -1 && !mods.empty())
    {
        if (mod_selected == -1)
        {
            last_description_trunc = WrapText(*text, mods[mod_hover].description, 400);
            text->setString(last_description_trunc);
            text->setPosition({ 600 - text->getLocalBounds().size.x / 2, 255 / 2 - text->getLocalBounds().size.y / 2 });
            window->draw(*text);
        }

        sf::RectangleShape hoverhighlight;
        if (!m_leftPressed)
        {
            hoverhighlight.setSize({399, 100});
            hoverhighlight.setPosition({0, 100 * mod_hover + scroll});
            hoverhighlight.setFillColor(sf::Color(20, 20, 20));

            if (hover_move)
            {
                hoverhighlight.setSize({ 31, 50 });
                if (hover_top_move)
                    hoverhighlight.setPosition({400 - 32, 100 * mod_hover + scroll});
                else
                    hoverhighlight.setPosition({400 - 32, 100 * mod_hover + scroll + 50});
            }
            if (hover_mod_options)
            {
                hoverhighlight.setSize({ 68, 50 });
                if (hover_top_option)
                    hoverhighlight.setPosition({ 300, 100 * mod_hover + scroll });
                else
                    hoverhighlight.setPosition({ 300, 100 * mod_hover + scroll + 50 });
            }
            window->draw(hoverhighlight);
        }

        text->setString("/\\");
        text->setPosition({ 400 - 16 - (text->getLocalBounds().size.x / 2), 100 * mod_hover + scroll - (text->getLocalBounds().size.y / 2) + 25 });
        window->draw(*text);

        text->setString("\\/");
        text->setPosition({ 400 - 16 - (text->getLocalBounds().size.x / 2), 100 * mod_hover + scroll - (text->getLocalBounds().size.y / 2) + 50 + 25 });
        window->draw(*text);

        text->setString("Config");
        text->setPosition({ 300 + 34 - (text->getLocalBounds().size.x / 2), 100 * mod_hover + scroll - (text->getLocalBounds().size.y / 2) + 25});
        window->draw(*text);

        if (mods[mod_hover].enabled)
            text->setString("Disable");
        else
            text->setString("Enable");
        text->setPosition({ 300 + 34 - (text->getLocalBounds().size.x / 2), 100 * mod_hover + scroll - (text->getLocalBounds().size.y / 2) + 50 + 25 });
        window->draw(*text);
    }
    else if (mod_selected == -1)
    {
        if (hover_inject)
        {
            sf::RectangleShape hover_highlight;
            hover_highlight.setSize({400, 254});
            hover_highlight.setPosition({400, 0});
            hover_highlight.setFillColor(sf::Color(20, 20, 20));

            window->draw(hover_highlight);
        }

        text->setString("Start");
        // would add a way to check for if primordialis is already open and alternate between Start and Inject but its too slow
        text->setPosition({600 - text->getLocalBounds().size.x / 2, 255 / 2 - text->getLocalBounds().size.y / 2});
        window->draw(*text);
    }
    else
    {
        sf::RectangleShape hoverhighlight;
        hoverhighlight.setSize({ 399, 100 });
        hoverhighlight.setPosition({ 0, 100 * mod_selected + scroll });
        hoverhighlight.setFillColor(sf::Color(20, 20, 20));
        window->draw(hoverhighlight);

        text->setString("Editing Config");
        text->setPosition({ 320 - (text->getLocalBounds().size.x / 2), 100 * mod_selected + scroll - (text->getLocalBounds().size.y / 2) + 50 });
        window->draw(*text);
    }

    for (int i = 0; i < mods.size(); i++)
    {
        int mody = i * 100 + int(scroll);

        if (i % 2 == 1)
        {
            sf::RectangleShape brighterrect;
            brighterrect.setFillColor(sf::Color(255, 255, 255, 10));
            brighterrect.setSize({399, 100});
            brighterrect.setPosition({0, float(mody)});
            window->draw(brighterrect);
        }

        text->setPosition({8, float(mody + 8)});
        text->setString(mods[i].name);
        window->draw(*text);
        text->setPosition({8, float(mody + 100 - 50)});
        text->setString(mods[i].author);
        text->setFillColor(sf::Color(60, 60, 60));
        window->draw(*text);
        text->setFillColor(sf::Color::White);

        if (!mods[i].enabled)
        {
            sf::RectangleShape disablerect;
            disablerect.setSize({399, 100});
            disablerect.setPosition({0, float(mody)});
            disablerect.setFillColor(sf::Color(0, 0, 0, 150));
            window->draw(disablerect);
        }
    }

    window->display();
}

bool ModManager::CheckSignificantMouseMovement()
{
    bool change = false;
    sf::Vector2i mouse = sf::Mouse::getPosition(*window);

    if (mouse.x < 400)
    {
        if (mods.empty())
        {
            if (mod_hover != -1)
            {
                mod_hover = -1;
                change = true;
            }
        }
        else
        {

            if (hover_move != (mouse.x > 368))
            {
                hover_move = !hover_move;
                change = true;
            }
            if (hover_mod_options != (mouse.x > 300 && mouse.x < 368))
            {
                hover_mod_options = !hover_mod_options;
                change = true;
            }

            int hoveridxnoclamp = int(mouse.y - scroll) / 100;
            int hoveridx = std::max(0, std::min(hoveridxnoclamp, (int)mods.size() - 1));
            if (mod_hover != hoveridx)
            {
                mod_hover = hoveridx;
                change = true;
            }
            if (mouse.x > 368 && hoveridxnoclamp == hoveridx)
            {
                if (!hover_move)
                {
                    hover_move = true;
                    change = true;
                }
                if (hover_top_move != ((mouse.y - int(scroll)) % 100 < 50))
                {
                    hover_top_move = !hover_top_move;
                    change = true;
                }
            }
            else
            {
                if (mouse.x > 300)
                {
                    if (hover_top_option != ((mouse.y - int(scroll)) % 100 < 50))
                    {
                        hover_top_option = !hover_top_option;
                        change = true;
                    }
                }
            }
        }

        if (config_hover != -1)
        {
            config_hover = -1;
            change = true;
        }
    }
    else
    {
        if (mod_selected != -1)
        {
            int hoveridxnoclamp = int(mouse.y - cscroll) / 50;
            int hoveridx = std::max(0, std::min(hoveridxnoclamp, (int)mods[mod_selected].config.size() - 1));

            if (config_hover != hoveridx)
            {
                config_hover = hoveridx;
                change = true;
            }
        }

        if (mod_hover != -1)
        {
            mod_hover = -1;
            change = true;
        }

        if (hover_inject != mouse.y < 255)
        {
            hover_inject = mouse.y < 255;
            change = true;
        }
    }

    return change;
}