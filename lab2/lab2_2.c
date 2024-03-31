#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

typedef struct {

	int xpos;
	int ypos;
}Point;

Point getScale2xPoint(const Point* p) {

	p->xpos *= 2;
	p->ypos *= 2;

}

void swapPoints(Point* p1, Point* p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;

}

int main() {

	int x, y;
	scanf("%d %d" & x, &y);
	Point p1 = { x, y };
	Point p2 = { getScale2xPpint(&p1) };
	printf("Calling getScale2xPoint()\n");
	printf("p1 : %d %d\n", x, y);
	printf("p2 : %d %d\n", p2.xpos, p2, ypos);


	printf("Calling swapPoint()");
	printf("p1 : %d %d \n", p1.xpos, p1.ypos);
	swapPoints(&p1, &p2);
	printf("p2 : %d %d \n", p1.xpos, p1.ypos);

}




­­­­­­­­­­