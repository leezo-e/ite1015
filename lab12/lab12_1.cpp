#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class A {
    public : 
      virtual string test(){
            string str_a = "A::test()";
            return str_a;
        }
    
};

class B : public A{
    public :
        virtual string test() {
            string str_b = "B::test()";
            return str_b;
        }
};

class C : public B{
    public : 
        virtual string test(){
            string str_c = "C::test()";
            return str_c;
        }
    
};

int main()
{
    A *a = new A;
    B *b = new B;
    C *c = new C;
    
    vector <A*> arr; 
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    for (int i = 0; i < 3; i++){
        cout << arr[i]->test() << endl;
        }

    
    delete a;
    delete b;
    delete c;
    
}