#include <iostream>

using namespace std;

int main() {
	int N;
	int** array = new int* [N];
	int min, max;

	for (int i = 0; i < N; i++) {
		int n;
		cin >> n;
		array[i] = n;

	}

	getMinMax(array, N, &min, &max);

	delete[] array;

}