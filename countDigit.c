#include <stdio.h>

int main()
{
	int n;
	printf("Enter number: ");
	scanf("%d", &n);
	int m = n;
	int i=0;
	while (n!=0){
		n=n/10;
		i += 1;
	}
	printf("Total Digit of %d in number (%d)", i , m);
	return 0;
}