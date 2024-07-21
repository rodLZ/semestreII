//
// Created by zamor on 02/07/2024.
//
/*
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <iostream>
#include <sstream>

int main() {
    // Create a window with the title "SFML Window"
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Window");

    sf::RectangleShape rectangle(sf::Vector2f(128, 128));
    rectangle.setFillColor(sf::Color::Red);
    rectangle.setPosition(325, 220);
    sf::RectangleShape rectangle2(sf::Vector2f(128, 128));


    // Main loop that continues until the window is closed
    while (window.isOpen()) {
        sf::Event event;
        // Process events
        while (window.pollEvent(event)) {
            // Close window: exit
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        // Clear the window with a black color
        window.clear(sf::Color::Black);
        window.draw(rectangle);

        // Display the contents of the window
        window.display();
    }

    return 0;
}
*/