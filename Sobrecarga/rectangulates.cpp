#include "rectangulares.h"

rect::rect() : x(0), y(0) {}

rect::rect(int x, int y) : x(x), y(y) {}

rect rect::operator+(rect val) {
    return rect(x + val.x, y + val.y);
}

rect rect::operator-(rect val) {
    return rect(x - val.x, y - val.y);
}

int rect::getX() const {
    return x;
}

int rect::getY() const {
    return y;
}

rect::~rect() {}