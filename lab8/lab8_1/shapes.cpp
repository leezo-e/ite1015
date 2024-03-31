#include <iostream>
#include "shapes.h"
using namespace std;


void Circle::findCircle(double i_x, double i_y, double i_r) {
	x = i_x;
	y = i_y;
	r = i_r;
}

double Circle::area() {
	return (3.14 * r * r);
}

double Circle::perimeter() {
	return (2 * 3.14 * r);
}

void Rectangle::findRectangle(double i_left_x, double i_right_x, double i_left_y, double i_right_y) {
	left_x = i_left_x;
    right_x = i_right_x;
    left_y = i_left_y;
    right_y = i_right
}

inline double Rectangle::area() {
	return ((right_x - left_x) * (right_y - left_x));
}

inline double Rectangle::perimeter() {
	return ((right_x - left_x) * 2 + (right_y - left_y)*2);
}
