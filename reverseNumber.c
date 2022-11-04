#include <stdio.h>

int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);
	int r=0;
	while (n!=0){
		int i = n%10;
		r = (r*10) + i;
		n = n/10; 
	}	
	printf("Reverse is %d", r);
	return 0;
}