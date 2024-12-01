#include "QuanLyDat.h"
#include <iostream>
using namespace std;

void QuanLyDat::themThuaDat(const ThuaDat &thuaDat) {
    danhSach.push_back(thuaDat);
}

void QuanLyDat::hienThiDanhSach() const {
    for (const auto &thua : danhSach) {
        thua.hienThiThongTin();
        cout << "-------------------" << endl;
    }
}

ThuaDat* QuanLyDat::timThuaDat(int soThua) {
    for (auto &thua : danhSach) {
        if (thua.getSoThua() == soThua) {
            return &thua;
        }
    }
    return nullptr;
}
