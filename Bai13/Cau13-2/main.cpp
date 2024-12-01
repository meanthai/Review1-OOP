#include <iostream>
#include "CPhanSo.h"

int main() {
    CPhanSo a(5, 3); // Khởi tạo phân số a
    CPhanSo b, c, kq;

    // Nhập phân số b và c
    cout << "Nhập phân số b:" << endl;
    b.Nhap();
    cout << "Nhập phân số c:" << endl;
    c.Nhap();

    // Thực hiện phép cộng
    kq = a + b + 5 + c;

    // In kết quả
    cout << "Kết quả là: ";
    kq.Xuat();
    cout << endl;

    // So sánh hai phân số
    if (a == b) {
        cout << "Phân số a bằng phân số b" << endl;
    } else {
        cout << "Phân số a không bằng phân số b" << endl;
    }

    return 0;
}
