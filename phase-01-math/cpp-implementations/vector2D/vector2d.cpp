#include "vector2d.h"
#include <iostream>
#include <iomanip>

Vector2D::Vector2D(double x, double y) : x(x), y(y) {}

Vector2D Vector2D::add(const Vector2D &other) const {
    return Vector2D(x + other.x, y + other.y);
}

Vector2D Vector2D::multiply(double scalar) const {
    return Vector2D(scalar * x, scalar * y);
}

void Vector2D::print() const {
    std::cout << "[" << std::fixed << std::setprecision(2) << x << ", " << y << "]";
}
