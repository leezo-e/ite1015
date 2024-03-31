#include <iostream>
#include "shapes.h"
using namespace std;

//shapes.cpp에서 Draw() 정의... 해야 되는데... 

int main() {
	int w, h;
	cin >> w >> h;
	while(true) {
		string str;
		cin >> str;

		if(str == "quit") break;
		else if(str == "rect") {
			int _x, _y, _w, _h;
			char _b;
			cin >> _x >> _y >> _w >> _h >> _b;
			
			Rectangle rect(w, h, _x, _y, _w, _h, _b);
			rect.Shape::Draw(w, h);// shape.cpp에서 Draw() 정의해둬야 됨!
			
			cout << "Area: " << rect.GetArea() << endl;
			cout << "Perimeter: " << rect.GetPerimeter() << endl;
			rect.Draw();
		}
		else if(str == "square") {
			int _x, _y, _l;
			char _b;
			cin >> _x >> _y >> _l >> _b;

			Square square(w, h, _x, _y, _l, _b);
			square.Shape::Draw(w, h);

			cout << "Area: " << square.GetArea() << endl;
			cout << "Perimeter: " << square.GetPerimeter() << endl;
			square.Draw();
		}
		else if(str == "diamond") {
			int _x, _y, _d;
			char _b;
			cin >> _x >> _y >> _d >> _b;

			Diamond diamond(w, h, _x, _y, _d, _b);
			diamond.Shape::Draw(w,h);

			cout << "Area: " << diamond.GetArea() << endl;
			cout << "Perimeter: " << diamond.GetPerimeter() << endl;
			diamond.Draw();
		}
	}

	return 0;
}
