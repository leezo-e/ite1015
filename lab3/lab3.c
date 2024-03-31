#define _CRT_NO_SECURE_WARNINGS

#include <stdio.h>

void rotateLeft(int* pa, int* pb, int* pc) {

	int temp = *pa;
	*pa = *pb;
	*pb = *pc;
	*pc = temp;

}

void rotateRight(int* pa, int* pb, int* pc) {
	int temp = *pc;
	*pc = *pb;
	*pb = *pa;
	*pa = temp;

}

int main() {

	int a = 10, b = 20, c = 30;
	int n;

	printf("%d %d %d", a, b, c);

	scanf("%d", &n);

	while (1) {

		scanf("%d", &n);

		if (n == 1) {
			rotateLeft(&a, &b, &c);
			printf("%d %d %d", a, b, c);
		}
		if (n == 2) {
			rotateRight(&a, &b, &c);
			printf("%d %d %d", a, b, c);
		}

		else
			break;
	}

}


