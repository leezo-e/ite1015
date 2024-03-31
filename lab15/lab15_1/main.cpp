#include "my_string.cpp"
#include <iostream>
#include <string>

using namespace std;

int main() {

	MyString a, b, c;

	while (1) {

		string str;
		cin >> str;

		if (str == "new") {

			cout << "enter a" << endl;
			cin >> a;
			cout << "enter b" << endl;
			cin >> b;
		}
		else if (str == "a" || str == "b")
		{
			char op;
			cin >> op;

			if (op == '+') {
				string back;
				cin >> back;
				if (str == "a" && back == "a") {
					c = a + a;
				}
				else if (str == "a" && back == "b") {
					c = a + b;
				}
				else if (str == "b" && back == "a") {
					c = b + a;
				}
				else if (str == "b" && back == "b") {
					c = b + b;
				}

				cout << c;

				

			}

			else if (op == '*') {
				int num;
				cin >> num;
				if (str == "a") {
					c = a * num;
				}
				else if (str == "b") {
					c = b * num;
				}

				cout << c;
			}
		}
		else if (str == "quit") break;

	}
}

	