//
// Created by zamor on 02/07/2024.
//
/*
#include <SFML/Graphics.hpp>
#include <cmath>

sf::ConvexShape createStar(float x, float y, float radius, sf::Color color) {
    sf::ConvexShape star;
    star.setPointCount(10);

    const float PI = 3.14159265;
    for (int i = 0; i < 5; ++i) {
        float angle = i * 2 * PI / 5 - PI / 2;
        float x1 = x + radius * cos(angle);
        float y1 = y + radius * sin(angle);

        angle += PI / 5;
        float x2 = x + radius / 2 * cos(angle);
        float y2 = y + radius / 2 * sin(angle);

        star.setPoint(i * 2, sf::Vector2f(x1, y1));
        star.setPoint(i * 2 + 1, sf::Vector2f(x2, y2));
    }

    star.setFillColor(color);
    return star;
}

int main() {

    sf::RenderWindow window(sf::VideoMode(800, 600), "Star Example");
    sf::ConvexShape star = createStar(400, 300, 100, sf::Color::Red);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        window.clear(sf::Color::Black);
        window.draw(star);
        window.display();
    }

    return 0;
}
*/
