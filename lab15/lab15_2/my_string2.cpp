#include "my_string2.h"
#include <string>

using namespace std;

MyString2::MyString2() {};

MyString2::MyString2(const MyString2& b) {
    str = b.str;
}


inline MyString2 MyString2::operator+(const MyString2& b) {
    MyString2 m;
    m.str = str + b.str;
    return m;
}

inline MyString2 MyString2:: operator*(const int b) {
    MyString2 m;
    for (int i = 0; i < b; i++) {
        m.str += str;
    }
    return m;
}

inline ostream& operator<<(ostream& out, MyString2& my_string) {
    out << my_string.str;
    return out;
}

inline istream& operator>>(istream& in, MyString2& my_string) {
    in >> my_string.str;
    return in;
}