#include <iostream>
#include <string.h>

using namespace std;

void getSumDiff(int a, int b, int &sum, int &diff){

  sum = a + b;
  diff = a - b;
  
}
int main(){

  int a, b, s = 0, d = 0;

  cin >> a >> b;



  getSumDiff(a, b, s, d);
  

  cout << "sum: " << s << endl;
  cout << "diff: " << d << endl;
}