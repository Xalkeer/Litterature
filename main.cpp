#include <iostream>
#include "book.h"
#include "comic.h"
#include "graphicNovel.h"
#include "novel.h"
using namespace std;
int main() {
    cout << "\nBook" << endl;
    book book1("The Great Gatsby", "F. Scott Fitzgerald", 180);
    book1.display();
    cout << "\nCOMIC" << endl;
    comic comic1("The Great Gatsby", "F. Scott Fitzgerald", 180, "F. Scott Fitzgerald");
    comic1.display();
    cout << "\nNOVEL" << endl;
    novel novel1("The Great Gatsby", "F. Scott Fitzgerald", 180, true);
    novel1.display();
    cout << "\nGRAPHIC NOVEL" << endl;
    graphicNovel graphicNovel1("The Great Gatsby", "F. Scott Fitzgerald", 100, true);
    graphicNovel1.display();


    return 0;
}
