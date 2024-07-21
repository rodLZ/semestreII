//
// Created by zamor on 02/07/2024.
//
/*
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <iostream>
#include <sstream>

sf::Color hexToColor(const std::string& hex) {
    // Ensure hex string starts with '#'
    if (hex[0] != '#') {
        throw std::invalid_argument("Hex color must start with #");
    }

    // Remove '#' and convert the rest to a stream
    std::string hexColor = hex.substr(1);
    std::stringstream ss;
    ss << std::hex << hexColor;

    // Extract the color values
    uint32_t color;
    ss >> color;

    // Check length of the hex string to determine if alpha is included
    if (hexColor.length() == 6) {
        return sf::Color((color >> 16) & 0xFF, (color >> 8) & 0xFF, color & 0xFF);
    } else if (hexColor.length() == 8) {
        return sf::Color((color >> 24) & 0xFF, (color >> 16) & 0xFF, (color >> 8) & 0xFF, color & 0xFF);
    } else {
        throw std::invalid_argument("Hex color must be 7 or 9 characters long, including #");
    }
}

int main() {
    // Create a window
    sf::RenderWindow window(sf::VideoMode(800, 600), "Hex to Color Example");

    // Define a color using a hex string
    sf::Color color = hexToColor("#FF5733");

    // Create a shape to display the color
    sf::CircleShape shape(200);
    shape.setFillColor(color);
    shape.setPosition(150, 150);

    // Main loop
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}
*/