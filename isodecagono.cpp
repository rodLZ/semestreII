//
// Created by zamor on 11/07/2024.
//
/*
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <sstream>

sf::ConvexShape createIsodecagon(float x, float y, float radius, sf::Color color) {
    sf::ConvexShape isodecagon;
    isodecagon.setPointCount(12);
    isodecagon.setPoint(0, sf::Vector2f(x + 100, y));
    isodecagon.setPoint(1, sf::Vector2f(x + 87, y + 50));
    isodecagon.setPoint(2, sf::Vector2f(x + 50, y + 87));
    isodecagon.setPoint(3, sf::Vector2f(x, y + 100));
    isodecagon.setPoint(4, sf::Vector2f(x - 50, y + 87));
    isodecagon.setPoint(5, sf::Vector2f(x - 87, y + 50));
    isodecagon.setPoint(6, sf::Vector2f(x - 100, y));
    isodecagon.setPoint(7, sf::Vector2f(x - 87, y - 50));
    isodecagon.setPoint(8, sf::Vector2f(x - 50, y - 87));
    isodecagon.setPoint(9, sf::Vector2f(x, y - 100));
    isodecagon.setPoint(10, sf::Vector2f(x + 50, y - 87));
    isodecagon.setPoint(11, sf::Vector2f(x + 87, y - 50));
    isodecagon.setFillColor(color);
    return isodecagon;
}

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Isodecagon Example");
    sf::ConvexShape isodecagon = createIsodecagon(400, 300, 100, sf::Color::Blue);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
        window.clear(sf::Color::Black);
        window.draw(isodecagon);
        window.display();
    }
    return 0;
}
*/