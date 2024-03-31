#pragma once

class Circle{
	private:
	    double x, y, z;
	
	public :
	    double findCircle(double i_x double i_y, double i_r);
	    void area();
		void perimeter;
}


class Rectangle{
	private : 
	    double left_x, right_x, left_y, right_x;
	
	public :
	    double findRectangle(double i_left_x, double i_right_x, double i_left_y, double i_right_y);
		double area();
		double perimeter();

}
