//
// Created by busev on 28/10/2024.
//

#include "comic.h"

#include <iostream>

#include "book.h"
using namespace std;

comic::comic(std::string title, std::string author, float pages, std::string cartoonist)
    : book(title, author, pages), cartoonist(cartoonist) {}

void comic::display() {
    book::display();
    cout <<  "Goncourt: " << cartoonist << endl;
    cout << "Price: " << calculatePrice() << " Euro" <<endl;
}

float comic::calculatePrice() {
    return pages * 0.3;
}


