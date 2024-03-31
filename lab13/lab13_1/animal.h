#pragma once 

#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Animal {
    public :
        Animal(string name, int age);
        virtual void printInfo();
    
    private : 
        string name_;
        int age_;
};


class Zebra : public Animal {
    public : 
        Zebra(string name, int age, int numStripes);
        virtual void printInfo();
    
    private :
        int numStripes_;
    
};

class Cat : public Animal{
    public : 
        Cat(string name, int age, string favoriteToy);
        virtual void printInfo();
    
    private : 
        string favoriteToy_;
};