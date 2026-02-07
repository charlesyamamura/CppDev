#ifndef HELPER_H
#define HELPER_H
#include "Rectangle.h"

class Helper {
public: 
    void modifyRectangle(Rectangle& rect) {
        rect.length = 4;
        rect.width = 5;
    }
};

#endif