#ifndef QUANLYDAT_H
#define QUANLYDAT_H

#include "ThuaDat.h"
#include <vector>

class QuanLyDat {
private:
    std::vector<ThuaDat> danhSach;

public:
    void themThuaDat(const ThuaDat &thuaDat);
    void hienThiDanhSach() const;
    ThuaDat* timThuaDat(int soThua);
};

#endif
