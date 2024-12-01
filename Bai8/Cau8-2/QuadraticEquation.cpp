#include "QuadraticEquation.h"
#include <iostream>
using namespace std;

// Constructor
QuadraticEquation::QuadraticEquation(double a, double b, double c) {
    this->a = a;
    this->b = b;
    this->c = c;
}

// Phương thức tính giá trị F(x) tại x = x0
double QuadraticEquation::evaluate(double x) const {
    return a * x * x + b * x + c;
}

// Nạp chồng toán tử + để cộng hai phương trình bậc hai
QuadraticEquation QuadraticEquation::operator+(const QuadraticEquation& other) const {
    return QuadraticEquation(a + other.a, b + other.b, c + other.c);
}

// Phương thức hiển thị phương trình
void QuadraticEquation::display() const {
    cout << a << "x^2 + " << b << "x + " << c;
}
