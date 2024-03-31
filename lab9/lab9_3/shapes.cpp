#include "shapes.h"
using namespace std;

//Draw() vector 사용하면 될 것 같은데...

Shape::Shape() {}
Shape::Shape(int c_width, int c_height) {
	c_w = c_width;
	c_h = c_height;
}

double Shape::GetArea() {
	return width*height;
}

int Shape::GetPerimeter() {
	return 2*(width+height);
}

void Shape::Draw(int canvas_width, int canvas_height) {
	
}


Square::Square(int c_width, int c_height, int _x, int _y, int _length, char _brush) {
	Shape(c_width, c_height);
	x = _x;
	y = _y;
	width = _length;
	height = _length;
	brush = _brush;
}

double Square::GetArea() {
	return width*height;
}

int Square::GetPerimeter() {
	return 2*(width+height);
}

void Square::Draw() {
	
}

Rectangle::Rectangle(int c_width, int c_height, int _x, int _y, int _width, int _height, char _brush) {
	Shape(c_width, c_height);
	x = _x;
	y = _y;
	width = _width;
	height = _height;
	brush = _brush;
}

double Rectangle::GetArea() {
	return width*height;
}

int Rectangle::GetPerimeter() {
	return 2*(width+height);
}

void Rectangle::Draw() {
	
}


Diamond::Diamond(int c_width, int c_height, int _x, int _y, int distance, char _brush) {
	Shape(c_width, c_height);
	x = _x;
	y = _y;
	width = distance*2 + 1;
	height = width;
	brush = _brush;
}

inline double Diamond::GetArea() {
	return ((double)width*(double)height)/2;
}

inline int Diamond::GetPerimeter() {
	return (width+1)*2;
}

void Diamond::Draw() {
	//하...어떻게 하지 
}
