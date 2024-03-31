#include <iostream>
#include <string.h>

using namespace std;

int main() {

	string str1;
	string str2;

	cin >> str1;
	cin >> str2;

	str1 += str2;

	cout << str1 << endl;
	cout << str1[0] << endl;
	cout << str1.back() >> endl;

}
