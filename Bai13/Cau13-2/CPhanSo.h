#ifndef CPHANSO_H
#define CPHANSO_H

#include <iostream>
using namespace std;

class CPhanSo {
private:
    int tu;   // Tử số
    int mau;  // Mẫu số
    void RutGon(); // Hàm rút gọn phân số

public:
    // Constructor
    CPhanSo(int tu = 0, int mau = 1);

    // Nhập/xuất
    void Nhap();
    void Xuat() const;

    // Toán tử cộng
    CPhanSo operator+(const CPhanSo &ps) const;
    CPhanSo operator+(int n) const;

    // Toán tử so sánh ==
    bool operator==(const CPhanSo &ps) const;
};

#endif
