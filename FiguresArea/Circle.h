#pragma once
#include "Figure.h"
#include <numbers>

class Circle :
    public Figure
{
public:
    Circle(const std::pair<double, double>& fst, const std::pair<double, double>& snd, const std::pair<double, double>& trd);
    ~Circle();
    double GetArea() const;
private:
    double area;
};
