#include <stdio.h>

int main()
{
	int n;
	printf("Enter the n no.: ");
	scanf("%d", &n);
	int sum=0;
	for (n; n>0; n--){
		sum += n;
	}	
	printf("The sum of n no. is %d", sum);
	return 0;
}