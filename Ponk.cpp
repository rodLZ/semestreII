//
// Created by zamor on 16/07/2024.
//
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include <sstream>

int main() {
    // creando la división del mapa
    sf::RenderWindow window(sf::VideoMode(1600, 1200), "SFML Window");

    // creando los rectángulos de en medio
    sf::RectangleShape rectangle(sf::Vector2f(20, 60));
    rectangle.setFillColor(sf::Color::White);
    rectangle.setPosition(770, 40);
    sf::RectangleShape rectangle2(sf::Vector2f(20, 60));
    rectangle2.setFillColor(sf::Color::White);
    rectangle2.setPosition(770, 140);
    sf::RectangleShape rectangle3(sf::Vector2f(20, 60));
    rectangle3.setFillColor(sf::Color::White);
    rectangle3.setPosition(770, 240);
    sf::RectangleShape rectangle4(sf::Vector2f(20, 60));
    rectangle4.setFillColor(sf::Color::White);
    rectangle4.setPosition(770, 340);
    sf::RectangleShape rectangle5(sf::Vector2f(20, 60));
    rectangle5.setFillColor(sf::Color::White);
    rectangle5.setPosition(770, 440);
    sf::RectangleShape rectangle6(sf::Vector2f(20, 60));
    rectangle6.setFillColor(sf::Color::White);
    rectangle6.setPosition(770, 540);
    sf::RectangleShape rectangle7(sf::Vector2f(20, 60));
    rectangle7.setFillColor(sf::Color::White);
    rectangle7.setPosition(770, 640);
    sf::RectangleShape rectangle8(sf::Vector2f(20, 60));
    rectangle8.setFillColor(sf::Color::White);
    rectangle8.setPosition(770, 740);
    sf::RectangleShape rectangle9(sf::Vector2f(20, 60));
    rectangle9.setFillColor(sf::Color::White);
    rectangle9.setPosition(770, 840);
    sf::RectangleShape rectangle10(sf::Vector2f(20, 60));
    rectangle10.setFillColor(sf::Color::White);
    rectangle10.setPosition(770, 940);
    sf::RectangleShape rectangle11(sf::Vector2f(20, 60));
    rectangle11.setFillColor(sf::Color::White);
    rectangle11.setPosition(770, 1040);

    // cuadrados de jugador
    sf::RectangleShape rectangleA(sf::Vector2f(30, 100));
    rectangleA.setFillColor(sf::Color::White);
    rectangleA.setPosition(100, 940);
    sf::RectangleShape rectangleB(sf::Vector2f(30, 100));
    rectangleB.setFillColor(sf::Color::White);
    rectangleB.setPosition(1500, 1040);

    // la bola
    sf::CircleShape shape(25);
    shape.setFillColor(sf::Color::White);
    shape.setPosition(755, 550);

    // hacer que la bola se mueva
    sf::FloatRect logoBounds = shape.getLocalBounds();
    float logoWidth = logoBounds.width;
    float logoHeight = logoBounds.height;
    float x = 755.0f;
    float y = 550.0f;
    float speedX = 0.1f;
    float speedY = 0.1f;

    //Puntuacion
    int scoreA = 0;
    int scoreB = 0;
    sf::Font font;
    if (!font.loadFromFile("arial.ttf")) {
        std::cerr << "Error cargando la fuente" << std::endl;
        return -1;
    }
    sf::Text scoreTextA;
    scoreTextA.setFont(font);
    scoreTextA.setCharacterSize(24);
    scoreTextA.setFillColor(sf::Color::White);
    scoreTextA.setPosition(200, 10);

    sf::Text scoreTextB;
    scoreTextB.setFont(font);
    scoreTextB.setCharacterSize(24);
    scoreTextB.setFillColor(sf::Color::White);
    scoreTextB.setPosition(1300, 10);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        // Movimiento de los cuadrados del jugador
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
            if (rectangleA.getPosition().y > 0) {
                rectangleA.move(0, -0.1f);
            }
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
            if (rectangleA.getPosition().y + rectangleA.getSize().y < window.getSize().y) {
                rectangleA.move(0, 0.1f);
            }
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
            if (rectangleB.getPosition().y > 0) {
                rectangleB.move(0, -0.1f);
            }
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
            if (rectangleB.getPosition().y + rectangleB.getSize().y < window.getSize().y) {
                rectangleB.move(0, 0.1f);
            }
        }

        // Movimiento de la bola
        x += speedX;
        y += speedY;

        if (y <= 0 || y + logoHeight >= window.getSize().y) {
            speedY = -speedY;
        }

        // Colisiones con los cuadrados laterales
        if (shape.getGlobalBounds().intersects(rectangleA.getGlobalBounds()) ||
            shape.getGlobalBounds().intersects(rectangleB.getGlobalBounds())) {
            if ((speedX > 0 && x + logoWidth >= rectangleB.getPosition().x) ||
                (speedX < 0 && x <= rectangleA.getPosition().x + rectangleA.getSize().x)) {
                speedX = -speedX;
            }
        }

        // Colisiones con las orillas (izquierda y derecha)
        if (x <= 0) {
            scoreB++;
            x = 755.0f;
            y = 550.0f;
            speedX = -speedX;
        }
        if (x + logoWidth >= window.getSize().x) {
            scoreA++;
            x = 755.0f;
            y = 550.0f;
            speedX = -speedX;
        }

        shape.setPosition(x, y);

        // Actualizar los textos de puntuación
        scoreTextA.setString("Panchito " + std::to_string(scoreA));
        scoreTextB.setString("Perenganita " + std::to_string(scoreB));

        // Imprimir la pantalla y los rectángulos de en medio
        window.clear(sf::Color::Black);
        window.draw(rectangle);
        window.draw(rectangle3);
        window.draw(rectangle2);
        window.draw(rectangle4);
        window.draw(rectangle5);
        window.draw(rectangle6);
        window.draw(rectangle7);
        window.draw(rectangle8);
        window.draw(rectangle9);
        window.draw(rectangle10);
        window.draw(rectangle11);
        // Cuadrados del jugador
        window.draw(rectangleA);
        window.draw(rectangleB);
        // Imprimir la bola
        window.draw(shape);
        // Imprimir las puntuaciones
        window.draw(scoreTextA);
        window.draw(scoreTextB);

        window.display();
    }

    return 0;
}
