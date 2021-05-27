#include <iostream>
#include <stdlib.h>

#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"



int main(int argc, char** argv) {
	// arguments must contain 7 numbers: a class number (1 - circle, 2 - triangle, 3 - rectangle) and three dots
	if (argc != 8) {
		std::cout << "Invalid number of arguments" << std::endl;
		return 1;
	}

	int fig_class = atoi(argv[1]);
	std::pair<double, double> p1(atof(argv[2]), atof(argv[3]));
	std::pair<double, double> p2(atof(argv[4]), atof(argv[5]));
	std::pair<double, double> p3(atof(argv[6]), atof(argv[7]));
	double area = 0;
	
	if (fig_class == 1) {
		Circle fig(p1, p2, p3);
		area = fig.GetArea();
	}
	if (fig_class == 2) {
		Triangle fig(p1, p2, p3);
		area = fig.GetArea();
	}
	if (fig_class == 3) {
		Rectangle fig(p1, p2, p3);
		area = fig.GetArea();
	}

	std::cout << "Area of the figure: " << area << std::endl;

	return 0;
}