#include "my_container.h"
#include <iostream>
#include <string>

using namespace std;

int main() {

	int ints;
	cin >> ints;
	MyContainer <int> myint(ints);
	cin >> myint;
	cout << myint;
	cout << endl;

	int doub;
	cin >> doub;
	MyContainer<double> mydoub(doub);
	cin >> mydoub;
	cout << mydoub;
	cout << endl;

	int words;
	cin >> words;
	MyContainer<string> mystr(words);
	cin >> mystr;
	cout << mystr;
	cout << endl;

	return 0;


}