#include "shape.h"
#include <iostream>
#include <vector>

using namespace std;

Shape::Shape(double width, double height) {
	w_ = width;
	h_ = height; 
}

Shape::~Shape() {}

Triangle::Triangle(double width, double height): public Shape(width, height) {
	w_ = width;
	h_ = height;
}

double Triangle::getArea()  {
	return w_*h_*2;
}

Rectangle::Rectangle(double width, double height): public Shape(width, height) {
   w_ = width;
   h_ = height;
}   

double Rectangle::getArea() {
	return w_*h_ ;
}
