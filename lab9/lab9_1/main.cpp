#include <iostream>
#include "number.h"
using namespace std;

int main() {
	Number number;
	Square square;
	Cube cube;

	while(true) {
		
		string str;
		cin >> str ;

		if(str == "quit") break;
		else if(str == "number") {
			int n;
			cin >> n;
			number.setNumber(n);

			cout << "getNumber(): " << number.getNumber() << endl;
	
		else if(str == "square") {
			int n;
			cin >> n;
			square.setNumber(n);

			cout << "getNumber(): " << square.getNumber() << endl;
			cout << "getSquare(): " << square.getSquare() << endl;
		}
		else if(str == "cube") {
			int n;
			cin >> n;
			cube.setNumber(n);

			cout << "getNumber(): " << cube.getNumber() << endl;
			cout << "getSquare(): " << cube.getSquare() << endl;
			cout << "getCube(): " << cube.getCube() << endl;
		}
	}

	return 0;
}
