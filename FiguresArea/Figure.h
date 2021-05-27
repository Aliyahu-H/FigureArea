#pragma once
#include <cmath>
#include <utility>

class Figure
{
public:
	virtual ~Figure();
	virtual double GetArea() const = 0;
protected:
	double get_side(const std::pair<double, double>& p1, const std::pair<double, double>& p2) const;
	double get_triangle_area(const double& fst_side, const double& snd_side, const double& trd_side) const;
};
