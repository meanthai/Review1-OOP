#ifndef POEM_H
#define POEM_H

#include <string>
#include <vector>

class Poem {
protected:
    std::vector<std::string> lines; // Lưu trữ các câu thơ

public:
    Poem(const std::vector<std::string>& lines);
    virtual bool checkRhyme() const = 0; // Kiểm tra gieo vần (hàm ảo thuần túy)
    virtual std::string getForm() const = 0; // Trả về thể loại thơ
    virtual ~Poem() {}
};

#endif
