#include <iostream>
#include <string.h>

using namespace std;

struct Person{
  int age;
  string name;
};

int main() {

  int N;
  cin >> N;
  Person p[N];

  for (int i = 0; i < N; i++){
    string nm;
    int ag;
    cin >> nm >> ag;
    p[i].name = nm;
    p[i].age = ag;
   
    
    }

  for (int i = 0; i < N; i++){
    cout << "Name: " << p[i].name << ", Age:" << p[i].age << endl;
  }


return 0;

  
  
}