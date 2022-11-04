#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14

float area(float n){
	return pi * (n * n);
}

int p;
int q;
int p1;
int q1;

float euclidean(float (*fptr)(float)){
	int x = pow((p1 - p),2);
	int y = pow((q1 - q),2);
	printf("%f\n", sqrt(x+y));
	float r = sqrt(x+y);
	return fptr(r);
}

float manhattan(float (*fptr)(float)){
	int x = (p1 - p);
	int y = (q1 - q);
	if (x<0){
		x = x*(-1);
	}
	if (y<0){
		y = y*(-1);
	}
	printf("%d\n", x+y);
	return fptr(x+y);
}

int main()
{
	printf("Enter value\n");
	printf("x1 = ");
	scanf("%d", &p);
	printf("y1 = ");
	scanf("%d", &q);
	printf("x2 = ");
	scanf("%d", &p1);
	printf("y2 = ");
	scanf("%d", &q1);
	float (*ptr)(float);
	ptr = area;
	float ans = euclidean(ptr);
	printf("ans is %.5f\n", ans);
	float ans2 = manhattan(ptr);
	printf("ans2 is %.5f", ans2);

	return 0;
}	
