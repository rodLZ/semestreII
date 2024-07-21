//
// Created by zamor on 10/07/2024.
//
/*
#include <SFML/Graphics.hpp>
#include <iostream>

int main() {
    sf::RenderWindow window(sf::VideoMode(1600, 1200), "DVD Screen Saver");
    sf::Texture dvdLogoTexture;
    if (!dvdLogoTexture.loadFromFile("../dvd2.png")) {
        std::cerr << "Failed to load DVD logo image" << std::endl;
        return -1;
    }
    sf::Sprite dvdLogoSprite(dvdLogoTexture);
    sf::FloatRect logoBounds = dvdLogoSprite.getLocalBounds();
    float logoWidth = logoBounds.width;
    float logoHeight = logoBounds.height;
    float x = 400.0f;
    float y = 300.0f;
    float speedX = 0.04f;
    float speedY = 0.04f;

    while (window.isOpen()) {
        // Procesar eventos
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
        x += speedX;
        y += speedY;
        if (x <= 0 || x + logoWidth >= window.getSize().x) {
            speedX = -speedX;
        }
        if (y <= 0 || y + logoHeight >= window.getSize().y) {
            speedY = -speedY;
        }
        dvdLogoSprite.setPosition(x, y);

        window.clear(sf::Color::Black);
        window.draw(dvdLogoSprite);
        window.display();
    }

    return 0;
}
*/