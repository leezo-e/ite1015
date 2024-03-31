#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class A {
	public:
		A(int i) {
			memberA = new int;
			*memberA = i;
			cout << "new memberA" << endl;
		}
		virtual ~A() {
			cout << "delete memberA" << endl;
		    delete memberA;
		}

		virtual void print() {
			cout << "*memberA " << *memberA << endl;
		}
	private:
		int* memberA;
};


class B: public A {
	public:
		B(double d): A(1) {
			memberB = new double;
			*memberB = d;
			cout << "new memberB" << endl;
		}
		virtual ~B() {
			cout << "delete memberB" << endl;
			delete memberB;
		    
		}

		void print() {
			A::print();
			cout << "*memberB " << *memberB << endl;
		}
	private:
		double* memberB;
};

class C: public B {
	public:
		C(const string& s): B(1.1) {
			memberC = new string;
			*memberC = s;
			cout << "new memberC" << endl;
		}
		virtual ~C() {
			cout << "delete memberC" << endl;
			delete memberC;
		}

		void print() {
			B::print();
			cout << "*memberC " << *memberC << endl;
		}
	private:
		string* memberC;
};

int main() {
	vector<A*> arr;
	while(1) {
	    int i;
	    double d;
		string s;
		cin >> i >> d >> s;


		arr.push_back(new A(i));
		arr.push_back(new B(d));
		arr.push_back(new C(s));
			

	for(int n = 0; n <arr.size(); n++) {
	    arr[n]->print();
	}
	
	for(int n = 0; n<arr.size(); n++) {
	    delete arr[n];
	}
	}
	
	return 0;
}