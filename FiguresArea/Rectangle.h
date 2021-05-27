#pragma once
#include "Figure.h"
class Rectangle :
    public Figure
{
public:
    Rectangle(const std::pair<double, double>& fst, const std::pair<double, double>& snd, const std::pair<double, double>& trd);
    ~Rectangle();
    double GetArea() const;
private:
    double area;
};

