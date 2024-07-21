//
// Created by zamor on 02/07/2024.
//
/*
#include <SFML/Graphics.hpp>


sf::ConvexShape createTriangle(float x, float y, float base, float height, sf::Color color) {
    sf::ConvexShape triangle;
    triangle.setPointCount(3);

    triangle.setPoint(0, sf::Vector2f(x, y));
    triangle.setPoint(1, sf::Vector2f(x + base / 2, y - height));
    triangle.setPoint(2, sf::Vector2f(x + base, y));

    triangle.setFillColor(color);
    return triangle;
}

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Triangle Example");
    sf::ConvexShape triangle = createTriangle(340, 350, 100, 100, sf::Color::Yellow);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        window.clear(sf::Color::Black);
        window.draw(triangle);
        window.display();
    }

    return 0;
}
*/