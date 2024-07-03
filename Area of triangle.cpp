#include <iostream>
#include <cmath>
class Triangle {
private:
    double a, b, c;
public:
    Triangle(double side1, double side2, double side3) : a(side1), b(side2), c(side3) {}
    double perimeter() const {
        return a + b + c;
    }
    double area() const {
        double s = perimeter() / 2;
        return std::sqrt(s * (s - a) * (s - b) * (s - c));
    }
    void printAreaAndPerimeter() const {
        std::cout << "Area: " << area() << " square units" << std::endl;
        std::cout << "Perimeter: " << perimeter() << " units" << std::endl;
    }
};

int main() {
    Triangle triangle(3, 4, 5);
    triangle.printAreaAndPerimeter();
    return 0;
}

