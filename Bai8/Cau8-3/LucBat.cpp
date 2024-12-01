#include "LucBat.h"
#include <iostream>

LucBat::LucBat(const std::vector<std::string>& lines) : Poem(lines) {}

bool LucBat::checkRhyme() const {
    // Kiểm tra gieo vần cho thể thơ lục bát
    if (lines.size() % 2 != 0) return false; // Lục bát phải có số câu chẵn
    for (size_t i = 0; i < lines.size(); i += 2) {
        // Giả định hàm kiểm tra vần có tên `ktgieovan`
        if (ktgieovan(lines[i], lines[i + 1]) != 0) return false;
    }
    return true;
}

std::string LucBat::getForm() const {
    return "Luc Bat";
}
