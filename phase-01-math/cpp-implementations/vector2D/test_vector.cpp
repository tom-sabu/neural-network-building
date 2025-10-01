#include "vector2d.h"
#include <iostream>

int main() {
    std::cout <<  "=== Testing Vector2D Class ===" << std::endl;
    std::cout << "Based on 3Blue1Brown Video 1: Vectors, what even are they?\n" << std::endl;

    Vector2D v1(3.0, 1.0);
    Vector2D v2(2.0, -1.0);

    std::cout << "Vector v1: ";
    v1.print();
    std::cout << std::endl;

    std::cout << "Vector v2: ";
    v2.print();
    std::cout << std::endl;

    std::cout << "--- Testing Addition ---" << std::endl;
    Vector2D sum = v1.add(v2);
    std::cout << "v1 + v2 = ";
    sum.print();
    std::cout << "(Expected: [5,00,0.00])" << std::endl << std::endl;

    std::cout << "--- Testing Scalar Multiplication ---" << std::endl;

    Vector2D doubled = v1.multiply(2.0);
    std::cout << "v1 * 2 = ";
    doubled.print();
    std::cout << "(Expected: [6.00, 2.00])" << std::endl << std::endl;

    Vector2D halved = v1.multiply(0.5);
    std::cout << "0.5 * v1 = ";
    halved.print();
    std::cout << "(Expected: [1.50, 0.50])" << std::endl;

    Vector2D flipped = v1.multiply(-1.0);
    std::cout << "-1 * v1 = ";
    flipped.print();
    std::cout << "(Expected: [-3.00, -1.00])" << std::endl << std::endl;

    std::cout << "--- Testing Combined Operation ---" << std::endl;
    Vector2D result = v1.multiply(2.0).add(v2);
    std::cout << "2*v1 + v2 = ";
    result.print();
    std::cout << "Expected: [8.00, 1.00]" << std::endl;

    std::cout << "\n=== All tests complete! ===" << std::endl;

    return 0;
}