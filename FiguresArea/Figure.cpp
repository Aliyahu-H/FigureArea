#include "Figure.h"



Figure::~Figure()
{
}

double Figure::get_side(const std::pair<double, double>& p1, const std::pair<double, double>& p2) const {
	return std::sqrt(std::pow(p1.first - p2.first, 2) + std::pow(p1.second - p2.second, 2));
}

double Figure::get_triangle_area(const double& fst_side, const double& snd_side, const double& trd_side) const {
	double p = (fst_side + snd_side + trd_side) / 2;
	return std::sqrt(p * (p - fst_side) * (p - snd_side) * (p - trd_side));
}
