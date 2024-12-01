#include <iostream>
#include "QuadraticEquation.h"

using namespace std;

int main() {
    // Khởi tạo hai phương trình bậc hai
    QuadraticEquation eq1(2, 3, 4); // F(x) = 2x^2 + 3x + 4
    QuadraticEquation eq2(1, -2, 5); // F(x) = x^2 - 2x + 5

    // Hiển thị phương trình đầu tiên
    cout << "Phuong trinh 1: ";
    eq1.display();
    cout << endl;

    // Hiển thị phương trình thứ hai
    cout << "Phuong trinh 2: ";
    eq2.display();
    cout << endl;

    // Tính giá trị của hai phương trình tại x = 2
    double x = 2.0;
    cout << "Gia tri cua F1(2) la: " << eq1.evaluate(x) << endl;
    cout << "Gia tri cua F2(2) la: " << eq2.evaluate(x) << endl;

    // Tính tổng của hai phương trình
    QuadraticEquation sum = eq1 + eq2;
    cout << "Tong hai phuong trinh: ";
    sum.display();
    cout << endl;

    return 0;
}
