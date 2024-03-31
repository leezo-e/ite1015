#include <iostream>
#include <string>

using namespace std;

template <typename T>

void myswap(T&a, T&b){

	T temp;
	temp = a;
	a = b;
	b = temp;

}

int main() {

	int i, j;
	cin >> i >> j;
	swap(i, j);

	cout << "After calling myswap : " << i << " " << j << endl;

	double k, l;
	cin >> k >> l;
	swap(k, l);
	

	cout << "After calling myswap : " << k << " " << l << endl;

	string str1, str2;
	cin >> str1 >> str2;
	swap(str1, str2);


	cout << "After calling myswap : " << str1 << " " << str2 << endl;
	
}