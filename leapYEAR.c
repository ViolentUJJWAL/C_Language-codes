#include <stdio.h>
#include <conio.h>
int main()
{
	int n;
	printf("Enter the year: ");
	scanf("%d",&n);
	if(n%4==0){
		if(n%100==0){
			if (n%400==0){
				printf("Leap year");
			}
			else {
				printf("Not Leap year");
			}
		}
		else {
			printf("Leap year");
		}
	}
	else{
		printf("Not Leap year");
	}
	return 0;
}