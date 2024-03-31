#include <iostream>
#include <stdlib.h>

using namespace std;

void magicSquare(int** arr, int n){
  int num = 1, i = 1, j = (n/2)+1;
  arr[i][j] = num;
  num++;

  while (num <= n*n){
    if ((num-1)%n ==0){
      i++;
      arr[i][j] = num;
      num++;
    }
    else {
      if (i - 1 < 1) {
        i = n;
        j++;
        arr[i][j] = num;
        num++;
        }
      else if  (j + 1 > n){
        i--;
        j = 1;
        arr[i][j] = num;
        num++; 
      }
      else {
        i--;
        j++;
        arr[i][j] = num;
        num++;
      }
    }
  }
}

int main(){
  int N;
  cin >> N;
  if (N%2==0||N < 3)
    exit(0);

  int** array = new int*[N];

  for (int i = 0; i < N; i++)
    array[i] = new int[N];
  
  magicSquare(array, N);

    for (int i = 1 ; i <= N; i++){
      for (int j = 1; j <= N; j++){
        cout << array[i][j] << " ";
      }
      cout << endl;
    }
  

  for (int i = 0; i < N; i++)
    delete[] array[i];

  delete[] array;
  
    
}
