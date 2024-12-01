#include "QuanLyDat.h"
#include <iostream>
using namespace std;

int main() {
    QuanLyDat ql;
    int choice;

    do {
        cout << "\nQuan ly dat dai\n";
        cout << "1. Them thua dat\n";
        cout << "2. Hien thi danh sach thua dat\n";
        cout << "3. Tim kiem thua dat\n";
        cout << "4. Thoat\n";
        cout << "Lua chon: ";
        cin >> choice;

        if (choice == 1) {
            int soThua, thoiHan;
            string chuSoHuu, loaiDat;
            double dienTich;

            cout << "Nhap so thua: ";
            cin >> soThua;
            cin.ignore();
            cout << "Nhap chu so huu: ";
            getline(cin, chuSoHuu);
            cout << "Nhap loai dat: ";
            getline(cin, loaiDat);
            cout << "Nhap dien tich (m2): ";
            cin >> dienTich;
            cout << "Nhap thoi han su dung (nam): ";
            cin >> thoiHan;

            ThuaDat thua(soThua, chuSoHuu, loaiDat, dienTich, thoiHan);
            ql.themThuaDat(thua);
        } else if (choice == 2) {
            ql.hienThiDanhSach();
        } else if (choice == 3) {
            int soThua;
            cout << "Nhap so thua can tim: ";
            cin >> soThua;

            ThuaDat* thua = ql.timThuaDat(soThua);
            if (thua) {
                thua->hienThiThongTin();
            } else {
                cout << "Khong tim thay thua dat!" << endl;
            }
        }
    } while (choice != 4);

    return 0;
}
