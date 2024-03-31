#include <iostream>
#include <string>
#include "rect.h"
using namespace std;

int main() {
	while(true) {
		string str;
		cin >> str;

		if(str == "quit") break;
		else if(str == "nonsquare") {
			int w, h;
			cin >> w >> h;

			NonSquare ns(w, h);
			nonsq.print();
			cout << "Area: " << nonsq.getArea() << endl;
			cout << "Perimeter: " << nonsq.getPerimeter() << endl;
		}
		else if(str == "square") {
			int w;
			cin >> w;

			Square s(w);
			sq.print();
			cout << "Area: " << sq.getArea() << endl;
			cout << "Perimeter: " << sq.getPerimeter() << endl;
		}
	}

	return 0;
}
