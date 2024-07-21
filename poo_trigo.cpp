//
// Created by zamor on 11/07/2024.
//
/*
#include "poo_trigo.h"
#include <cmath>
Isodecagon::Isodecagon(float x, float y, float radius, sf::Color color) {
    shape.setPointCount(12);
    const float angleIncrement = 360.0f / 12.0f;
    for (int i = 0; i < 12; ++i) {
        float angle = i * angleIncrement;
        float radian = angle * 3.14159265f / 180.0f;
        float px = x + radius * cos(radian);
        float py = y + radius * sin(radian);
        shape.setPoint(i, sf::Vector2f(px, py));
    }
    shape.setFillColor(color);
}
sf::ConvexShape Isodecagon::getShape() const {
    return shape;
}
*/