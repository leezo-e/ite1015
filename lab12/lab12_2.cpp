#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class A {
    public : 
       virtual string getTypeInfo(){
            string str_a = "This is an instance of class A";
            return str_a;
        }
};

class B : public A{ 
    public :
        virtual string getTypeInfo(){
            string str_b = "This is an instance of class B";
            return str_b;
        }
};


class C : public B {
    public : 
        virtual string getTypeInfo(){
            string str_c = "This is an instance of class C";
            return str_c;
        }
        
    
};

//전역변수로 설정
        
void printObjectTypeInfo1(A* object){
    cout << object->getTypeInfo() << endl;
    
}

void printObjectTypeInfo2(A&object){
    cout << object.getTypeInfo() << endl;
    
}


int main()
{
    A *a = new A;
    B *b = new B;
    C *c = new C;
    
    vector<A*> arr;
    
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);
    
    for (int i = 0 ; i < 3; i++){
        printObjectTypeInfo1(arr[i]);
        printObjectTypeInfo2(*arr[i]);
    }

    delete a;
    delete b;
    delete c;
    
}