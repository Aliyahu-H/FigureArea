#include "Rectangle.h"

Rectangle::Rectangle(const std::pair<double, double>& fst, const std::pair<double, double>& snd, const std::pair<double, double>& trd) {
	double fst_side = get_side(fst, snd);
	double snd_side = get_side(snd, trd);
	double trd_side = get_side(fst, trd);

	this->area = 2 * get_triangle_area(fst_side, snd_side, trd_side);
}

Rectangle::~Rectangle() {
}

double Rectangle::GetArea() const {
	return area;
}
