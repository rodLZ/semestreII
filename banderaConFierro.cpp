//
// Created by zamor on 02/07/2024.
//
/*
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <iostream>
#include <sstream>
#include <vector>

sf::Color hexToColor(const std::string& hex) {
    if (hex[0] != '#') {
        throw std::invalid_argument("Hex color must start with #");
    }

    std::string hexColor = hex.substr(1);
    std::stringstream ss;
    ss << std::hex << hexColor;

    uint32_t color;
    ss >> color;

    if (hexColor.length() == 6) {
        return sf::Color((color >> 16) & 0xFF, (color >> 8) & 0xFF, color & 0xFF);
    } else if (hexColor.length() == 8) {
        return sf::Color((color >> 24) & 0xFF, (color >> 16) & 0xFF, (color >> 8) & 0xFF, color & 0xFF);
    } else {
        throw std::invalid_argument("Hex color must be 7 or 9 characters long, including #");
    }
}

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Stripes Example");
    std::vector<sf::Color> colors;
    try {
        colors.push_back(hexToColor("#3346ff"));
        colors.push_back(hexToColor("#FFFFFF"));
        colors.push_back(hexToColor("#BE1200"));
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    std::vector<sf::RectangleShape> stripes;
    float stripeWidth = (window.getSize().x - 50) / colors.size();

    for (size_t i = 0; i < colors.size(); ++i) {
        sf::RectangleShape stripe(sf::Vector2f(stripeWidth, window.getSize().y));
        stripe.setFillColor(colors[i]);
        stripe.setPosition(50 + i * stripeWidth, 0);
        stripes.push_back(stripe);
    }

    sf::RectangleShape pole(sf::Vector2f(50, window.getSize().y));
    pole.setFillColor(sf::Color(139, 69, 19));

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        window.clear(sf::Color::Black);
        window.draw(pole);
        for (const auto& stripe : stripes) {
            window.draw(stripe);
        }

        window.display();
    }

    return 0;
}
*/
