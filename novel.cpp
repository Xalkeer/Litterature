#include "novel.h"
#include <iostream>
using namespace std;

novel::novel(std::string title, std::string author, float pages, bool goncourt)
    : book(title, author, pages), goncourt(goncourt) {}

void novel::display() {
    book::display();
    cout << "Goncourt: " << (goncourt ? "Yes" : "No") << endl;
    cout << "Price: " << calculatePrice() << " Euro" <<endl;
}

float novel::calculatePrice() {
    return pages * 0.01;
}