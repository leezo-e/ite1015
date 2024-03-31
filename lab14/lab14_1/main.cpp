#include "shape.cpp"
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;


int main() {
	vector<Shape*> arr;
	while(1) {
		string str;
		cin >> str;

		if(str == "r") {
			double width, height;
			cin >> width >> height;
			arr.push_back(new Rectangle(width, height));
		}
		else if(str == "t") {
			double width, height;
			cin >> width >> height;
			arr.push_back(new Triangle(width, height));
		}
		else if(str == "0") break;
	}

	for(int i = 0; i < arr.size(); i++) {
	    cout << arr[i]->getArea() << endl;
	}
	
	for(int i = 0; i < arr.size(); i++) {
	    delete arr[i];
	}

	return 0;
}