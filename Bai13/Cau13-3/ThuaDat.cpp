#include "ThuaDat.h"
#include <iostream>
using namespace std;

ThuaDat::ThuaDat(int soThua, string chuSoHuu, string loaiDat, double dienTich, int thoiHan)
    : soThua(soThua), chuSoHuu(chuSoHuu), loaiDat(loaiDat), dienTich(dienTich), thoiHan(thoiHan) {}

void ThuaDat::hienThiThongTin() const {
    cout << "So thua: " << soThua << endl;
    cout << "Chu so huu: " << chuSoHuu << endl;
    cout << "Loai dat: " << loaiDat << endl;
    cout << "Dien tich: " << dienTich << " m2" << endl;
    cout << "Thoi han: " << thoiHan << " nam" << endl;
}

int ThuaDat::getSoThua() const {
    return soThua;
}

void ThuaDat::capNhatThongTin(const string &chuSoHuu, const string &loaiDat, double dienTich, int thoiHan) {
    this->chuSoHuu = chuSoHuu;
    this->loaiDat = loaiDat;
    this->dienTich = dienTich;
    this->thoiHan = thoiHan;
}
