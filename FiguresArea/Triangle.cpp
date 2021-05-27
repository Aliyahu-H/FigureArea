#include "Triangle.h"

Triangle::Triangle(const std::pair<double, double>& fst, const std::pair<double, double>& snd, const std::pair<double, double>& trd) {
	double fst_side = get_side(fst, snd);
	double snd_side = get_side(snd, trd);
	double trd_side = get_side(fst, trd);

	this->area = get_triangle_area(fst_side, snd_side, trd_side);
}

Triangle::~Triangle() {
}

double Triangle::GetArea() const {
	return area;
}
