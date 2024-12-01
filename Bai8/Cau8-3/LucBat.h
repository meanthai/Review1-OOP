#ifndef LUCBAT_H
#define LUCBAT_H

#include "Poem.h"

class LucBat : public Poem {
public:
    LucBat(const std::vector<std::string>& lines);
    bool checkRhyme() const override;
    std::string getForm() const override;
};

#endif
