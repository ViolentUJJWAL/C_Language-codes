#include <stdio.h>

int main()
{
	int n;
	printf("Enter the no.: ");
	scanf("%d", &n);
	int m = n;
	int pali = 0;
	while(n!=0){
		int r = n%10;
		pali = (pali*10)+r;
		n = n/10;
	}
	printf("reverse %d\n", pali);
	if (m==pali){
		printf("%d is palindrome", m);
	}
	else{
		printf("%d is not palindrome", m);
	}

	return 0;
}