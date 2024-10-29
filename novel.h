#ifndef NOVEL_H
#define NOVEL_H

#include "book.h"

class novel : public book {
    bool goncourt;

public:
    novel(std::string title, std::string author, float pages, bool goncourt);
    void display();
    float calculatePrice();
};

#endif //NOVEL_H