#pragma once
#include "Figure.h"
class Triangle :
    public Figure
{
public:
    Triangle(const std::pair<double, double>& fst, const std::pair<double, double>& snd, const std::pair<double, double>& trd);
    ~Triangle();
    double GetArea() const;
private:
    double area;
};

