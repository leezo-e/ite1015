#include "my_string.h"
#include <string>

using namespace std;

inline MyString& MyString::operator=(const MyString& b) {
	str = b.str;
	return *this;

}

inline MyString MyString::operator+(const MyString& b) {

	MyString m;
	m.str = str + b.str;
	return m;

}

inline MyString MyString::operator*(const int b) {
	
	MyString m;
	for (int i = 0; i < b; i++) {
		m.str += str;
	}
	return m;

}


inline ostream& operator<<(ostream& out, MyString& my_string) {
	out << my_string.str;
	return out;
}

inline istream& operator>>(istream& in, MyString& my_string) {
	in >> my_string.str;
	return in;
}
