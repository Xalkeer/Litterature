//
// Created by busev on 28/10/2024.
//

#ifndef BOOK_H
#define BOOK_H
#include <string>


class book {
public:
    std::string  title;
    std::string  author;
    int pages = 0 ;


    book(std::string title, std::string author, float pages);

    void display();

    float getPage();
};



#endif //BOOK_H
