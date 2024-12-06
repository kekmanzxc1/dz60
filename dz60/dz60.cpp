#include <iostream>
//Завдання 1 
//class Complex {
//private:
//    double real;
//    double imag;
//
//public:
//    Complex() : real(0), imag(0) {}
//
//    Complex(double r, double i) : real(r), imag(i) {}
//
//    Complex operator+(const Complex& other) const {
//        return Complex(real + other.real, imag + other.imag);
//    }
//
//    void display() const {
//        std::cout << real;
//        if (imag >= 0) {
//            std::cout << " + " << imag << "i" << std::endl;
//        }
//        else {
//            std::cout << " - " << -imag << "i" << std::endl;
//        }
//    }
//};
//
//int main() {
//    Complex a1(3.0, 4.0);
//    Complex a2(1.5, -2.5);
//
//    Complex a3 = a1 + a2;
//
//    std::cout << "First complex number: ";
//    a1.display();
//
//    std::cout << "Second complex number: ";
//    a2.display();
//
//    std::cout << "Sum of the two complex numbers: ";
//    a3.display();
//}
//Завдання 2 
class Point {
private:
    double x;
    double y;

public:
    Point() : x(0), y(0) {}

    Point(double xValue, double yValue) : x(xValue), y(yValue) {}

    friend std::ostream& operator<<(std::ostream& os, const Point& point) {
        os << "(" << point.x << ", " << point.y << ")";
        return os;
    }
};

int main() {
    Point p1(4, 8);
    Point p2(1, -2);

    std::cout << "Point 1: " << p1 << std::endl;
    std::cout << "Point 2: " << p2 << std::endl;
}
