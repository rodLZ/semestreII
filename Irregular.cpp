//
// Created by zamor on 11/07/2024.
//
/*
#include <SFML/Graphics.hpp>
#include <array>

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Irregular Figure");
    std::array<sf::Vertex, 5> vertices = {
            sf::Vertex(sf::Vector2f(100, 100), sf::Color::Red),
            sf::Vertex(sf::Vector2f(200, 120), sf::Color::Green),
            sf::Vertex(sf::Vector2f(250, 250), sf::Color::Blue),
            sf::Vertex(sf::Vector2f(150, 300), sf::Color::Yellow),
            sf::Vertex(sf::Vector2f(50, 250), sf::Color::White)
    };

    sf::VertexArray shape(sf::TriangleFan, vertices.size());
    for (size_t i = 0; i < vertices.size(); ++i) {
        shape[i] = vertices[i];
    }
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
        window.clear(sf::Color::Black);
        window.draw(shape);
        window.display();
    }
    return 0;
}
*/