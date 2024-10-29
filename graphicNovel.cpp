#include "graphicNovel.h"
#include <iostream>
using namespace std;

graphicNovel::graphicNovel(std::string title, std::string author, float pages, bool inRockApproved)
    : novel(title, author, pages, false), inRockApproved(inRockApproved) {}

void graphicNovel::display() {
    book::display();
    cout << "Price: " << calculatePrice() << " Euro" << endl;
    cout << "In Rock Approved: " << (inRockApproved ? "Yes" : "No") << endl;
}

float graphicNovel::calculatePrice() {
    return pages * 0.2;
}