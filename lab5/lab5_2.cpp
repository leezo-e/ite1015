#include <iostream>

using namespace std;

int main(){

  int N, min, max; 
  cin >> N;
  int array [N];

  for (int i =0 ; i < N; i++){
    int a;
    cin >> a;
    array[i] = a;
  }

  for (int i = 0; i < N-1; i++){
    min = array[0];
    if (array[i] > array[i+1])
      min = array[i+1];
  }

  for (int i = 0 ; i < N-1; i++){
    max = array[0];
    if (array[i] < array[i+1])
      max = array [i+1];
  }
    cout << "min: " << min << endl;
    cout << "max: " << max << endl;


  
}