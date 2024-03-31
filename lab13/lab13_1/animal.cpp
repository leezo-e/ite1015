#include "animal.h"
using namespace std;

Animal::Animal(string name, int age) {
	name_ = name;
	age_ = age;
}

void Animal::printInfo() {}


Zebra::Zebra(string name, int age, int numStripes): Animal(name, age) {
	name_ = name;
	age_ = age;
	numStripes_ = numStripes;
}

 void Zebra::printInfo() {
	cout << "Zebra, Name: " << name << ", Age: " << age << ", Number of stripes: " << numStripes << endl;
}

 Cat::Cat(string name, int age, string favoriteToy): Animal(name, age) {
	name_ = name;
	age_ = age;
	favoriteToy_ = favoriteToy;
}

void Cat::printInfo() {
	cout << "Cat, Name: " << name << ", Age: " << age << ", Favorite toy: " << favoriteToy << endl;
}
