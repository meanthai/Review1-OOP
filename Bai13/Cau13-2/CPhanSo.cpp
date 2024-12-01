#include "CPhanSo.h"
#include <bits/stdc++.h>

// Constructor
CPhanSo::CPhanSo(int tu, int mau) : tu(tu), mau(mau) {
    if (mau == 0) {
        cout << "Mẫu số không được bằng 0. Gán mẫu số = 1." << endl;
        this->mau = 1;
    }
    RutGon();
}

// Rút gọn phân số
void CPhanSo::RutGon() {
    int gcd = abs(__gcd(tu, mau)); // Tìm ước chung lớn nhất
    tu /= gcd;
    mau /= gcd;
    if (mau < 0) { // Đảm bảo mẫu dương
        tu = -tu;
        mau = -mau;
    }
}

// Hàm nhập
void CPhanSo::Nhap() {
    cout << "Nhập tử số: ";
    cin >> tu;
    cout << "Nhập mẫu số: ";
    cin >> mau;
    if (mau == 0) {
        cout << "Mẫu số không được bằng 0. Gán mẫu số = 1." << endl;
        mau = 1;
    }
    RutGon();
}

// Hàm xuất
void CPhanSo::Xuat() const {
    if (mau == 1)
        cout << tu;
    else
        cout << tu << "/" << mau;
}

// Toán tử cộng (phân số + phân số)
CPhanSo CPhanSo::operator+(const CPhanSo &ps) const {
    int newTu = tu * ps.mau + ps.tu * mau;
    int newMau = mau * ps.mau;
    return CPhanSo(newTu, newMau);
}

// Toán tử cộng (phân số + số nguyên)
CPhanSo CPhanSo::operator+(int n) const {
    int newTu = tu + n * mau;
    return CPhanSo(newTu, mau);
}

// Toán tử so sánh ==
bool CPhanSo::operator==(const CPhanSo &ps) const {
    return (tu == ps.tu && mau == ps.mau);
}
