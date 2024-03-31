#pragma once
#include <iostream>

using namespace std;

class Shape {
    public :
        Shape(double width, double height);
        virtual ~Shape();
        virtual double getArea();
    private :
        double w_, h_ ;
        
};

class Triangle : public Shape {
    public :
        Triangle(double width, double height);
        ~Triangle ();
        double getArea();
    
};


class Rectangle : public Shape{
    public : 
        Rectangle(double width, double height);
        ~Rectangle();
        double getArea();
    
};




