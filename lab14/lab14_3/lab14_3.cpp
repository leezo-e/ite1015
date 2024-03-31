#include <iostream>
#include <vector>

using namespace std;

class B
{
	public:
		virtual ~B() {}
};

class C : public B
{
	public:
		void test() { cout << "C::test()" << endl; };
};

class D : public B
{
	public:
		void test() { cout << "D::test()" << endl; };
};


int main() {
	vector<B*> arr;
	while(1) {
		
		string str;
		cin >> str;

		if(str == "B")	arr.push_back(new B);
		else if(str == "C") arr.push_back(new C);
		else if(str == "D") arr.push_back(new D);
		else if(str == "0") break;
	}
	

	for(int i = 0; i < arr.size(); i++) {
	    
		C* pc = dynamic_cast<C*>(arr[i]);
		D* pd = dynamic_cast<D*>(arr[i]);
		
		if(pc) pc->test();
		else if(pd) pd->test();
	}

	for(int i = 0; i < arr.size(); i++) {
	    delete arr[i];
	}

	return 0;
}
