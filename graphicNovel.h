#ifndef GRAPHICNOVEL_H
#define GRAPHICNOVEL_H

#include "novel.h"

class graphicNovel : public novel {
    bool inRockApproved;

public:
    graphicNovel(std::string title, std::string author, float pages, bool inRockApproved);
    void display();
    float calculatePrice();
};

#endif //GRAPHICNOVEL_H