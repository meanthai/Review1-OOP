#ifndef THUADAT_H
#define THUADAT_H

#include <string>

class ThuaDat {
private:
    int soThua;
    std::string chuSoHuu;
    std::string loaiDat;
    double dienTich;
    int thoiHan;

public:
    ThuaDat(int soThua, std::string chuSoHuu, std::string loaiDat, double dienTich, int thoiHan);
    void hienThiThongTin() const;
    int getSoThua() const;
    void capNhatThongTin(const std::string &chuSoHuu, const std::string &loaiDat, double dienTich, int thoiHan);
};

#endif
