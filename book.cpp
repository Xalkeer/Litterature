//
// Created by busev on 28/10/2024.
//

#include "book.h"
#include <iostream>
using namespace std;

book::book(std::string title ,std::string author,float pages) {

    this->title = title;
    this->author = author;
    this->pages = pages;
}

void book::display() {
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Pages: " << pages << endl;
}

float book::getPage() {
    return pages;
}