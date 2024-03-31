#include <iostream>

using namespace std;

void sort (int* arr, int n){

  int a, b, temp;
  for (a = 0; a < n; a++){
    for (b = 0; b < n-a; b++){
      if(arr[b] > arr[b+1]){
        temp = arr[b];
        arr[b] = arr[b+1];
        arr[b+1] = temp;
      }
    }
  }
}

int main() {
  int N;
  cin >> N;
  int *array = new int [N];
  
  for (int i = 0; i < N; i++){
    int num;
    cin >> num;
    array[i] = num;
  }

  sort(array, N);

  for (int i = 0; i < N; i++){
    cout << array[i] << " ";
  }

  delete[] array;
  
}