#include <stdio.h>
#include <conio.h>
int main()
{
	int n;
	printf("Enter the no.: ");
	scanf("%d",&n);
	if(n%2==0){
		printf("Even number");
	}
	else {
		printf("Odd number");
	}
	return 0;
}