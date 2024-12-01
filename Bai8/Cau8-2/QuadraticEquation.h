#ifndef QUADRATICEQUATION_H
#define QUADRATICEQUATION_H

class QuadraticEquation {
private:
    double a, b, c; // Cac he so cua phuong trinh bac hai

public:
    // Constructor
    QuadraticEquation(double a, double b, double c);

    // Phuong thuc tinh gia tri F(x) tai x = x0
    double evaluate(double x) const;

    // Phuong thuc nap chong toan tu + de cong hai phuong trinh bac hai
    QuadraticEquation operator+(const QuadraticEquation& other) const;

    // Phuong thuc hien thi phuong trinh
    void display() const;
};

#endif
