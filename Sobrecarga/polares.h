#ifndef polares
#define polares

#include <cmath>

class polar
{
private:
    double r;
    double theta;

public:
    polar();
    polar(double r, double theta);
    double getR() const;
    double getTheta() const;
    virtual ~polar();
};

