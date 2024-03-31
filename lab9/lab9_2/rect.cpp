#include "rect.h"
using namespace std;

Rectanlge::Rectangle(int width, int height) {
	_w = width;
	_h = height;
}

int Shape::getArea() {
	return (_w * _h);
}

int Shape::getPerimeter() {
	return ((_w + _h)*2);
}

Square::Square(int width): Rectangle(width, width) {
	_w = width;
	_h = width;
}

void Square::print() {
	cout << _w << "x" << _h << " Square" << endl;
}

NonSquare::NonSquare(int width, int height): Rectangle(width, height) {
	_w = width;
	_h = height;
}

void NonSquare::print() {
	cout << _w << "x" << _h << " Nonsquare" << endl;
}
