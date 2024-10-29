//
// Created by busev on 28/10/2024.
//

#ifndef COMIC_H
#define COMIC_H
#include <string>
#include "book.h"


class comic: public book {
    std::string cartoonist;

public :
    comic(std::string title, std::string author, float pages, std::string cartoonist);


    void display();

    float calculatePrice();
};



#endif //COMIC_H
