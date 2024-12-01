#include "LucBat.h"
#include <iostream>
#include <vector>

int main() {
    // Nhập dữ liệu bài thơ từ người dùng
    std::vector<std::string> lines = {
        "Trăm năm trong cõi người ta",
        "Chữ tài chữ mệnh khéo là ghét nhau"
    };

    // Tạo đối tượng LucBat
    LucBat poem(lines);

    // Hiển thị kết quả
    std::cout << "The loai bai tho: " << poem.getForm() << std::endl;
    if (poem.checkRhyme()) {
        std::cout << "Bai tho tuan thu luat gieo van!" << std::endl;
    } else {
        std::cout << "Bai tho khong tuan thu luat gieo van!" << std::endl;
    }

    return 0;
}
