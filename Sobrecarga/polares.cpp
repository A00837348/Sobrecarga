#include "polares.h"

polar::polar() : r(0.0), theta(0.0) {}

polar::polar(double r, double theta) : r(r), theta(theta) {}

double polar::getR() const {
    return r;
}

double polar::getTheta() const {
    return theta;
}

polar::~polar() {}