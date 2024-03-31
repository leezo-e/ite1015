#include <isotream>
#include "shapes.h"
using namespace std;

int main() {

	char ans;
	cout << "shape?" << endl;
	
	while (ans == Q) {
		if (ans == C) {
			Circle circle;
			circle.findcircle(a, b, c);

			cout << "area: " << circle.area << ", perimeter: " << circle.perimeter<< endl;
		}
		if (ans == R) {
			Rectangle rectangle;
			cout << "area: " << rectangle.area << ", perimeter: " << circle.perimeter << endl;
		}

	}
}




