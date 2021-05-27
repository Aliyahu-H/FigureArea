#include "Circle.h"


Circle::Circle(const std::pair<double, double>& fst, const std::pair<double, double>& snd, const std::pair<double, double>& trd) {
	if (fst == snd && snd == trd) {
		this->area = 0;
	}
	else {
		double fst_side = get_side(fst, snd);
		double snd_side = get_side(snd, trd);
		double trd_side = get_side(fst, trd);

		double triangle_area = get_triangle_area(fst_side, snd_side, trd_side);

		if (triangle_area != 0) {
			double R = fst_side * snd_side * trd_side / 4 / triangle_area;
			this->area = 3.14159265358979323846 * R * R;
		}
		else this->area = -1;
	}
}

Circle::~Circle() {
}

double Circle::GetArea() const {
	return area;
}
