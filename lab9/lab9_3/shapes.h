#include <iostream>
#include <string>
#include <vector>

class Shape {
	public:
		Shape();
		Shape(int c_width, int c_height);
  
		double GetArea();
		int GetPerimeter();
		void Draw(int canvas_width, int canvas_height);

	protected:
		int c_w;
		int c_h;

		vector<string> canvas;

		int x;
		int y;
		int width;
		int height;
		char brush;
};

class Square: public Shape {
	public:
		Square(int c_width, int c_height, int _x, int _y, int _length, char _brush);

		double GetArea();
		int GetPerimeter();
		void Draw();
};

class Rectangle: public Shape {
	public:
		Rectangle(int c_width, int c_height, int _x, int _y, int _width, int _height, char _brush);

		double GetArea();
		int GetPerimeter();
		void Draw();
};

class Diamond: public Shape {
	public:
		Diamond(int c_width, int c_height, int _x, int _y, int distance, char _brush);

		double GetArea();
		int GetPerimeter();
		void Draw();
};
