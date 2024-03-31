#define_CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

struct Person {
	char name[10];
	int age;
};

int main() {

	struct Person person[3];
	
	for (int i = 0; i < 3; i++) {
		scanf("%s %d", person[i].name, &person[i].age);
	}

	for (int i = 0; i < 3; i++) {
		printf("%s %d\n", person[i].name, person[i].age);
	}
	
	return 0;
}
