#pragma once

#include <iostream>

class Vector2D {
    private:
        double x, y;

    public:

        Vector2D(double x = 0.0, double y = 0.0);

        Vector2D add(const Vector2D& other) const;

        Vector2D multiply(double scalar) const;

        double getX() const { return x; }
        double getY() const { return y; }

        void print() const;
};