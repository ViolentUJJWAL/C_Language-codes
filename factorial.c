#include <stdio.h>

unsigned long long int factorial(unsigned long long int n)
{
	if (n==1)
	{
		return 1;
	}
	return n * factorial(n-1);
}

int main()
{
	while (-1){
		int n;
		printf("Enter Number: ");
		scanf("%d",&n);
		unsigned long long int f=factorial(n);
		printf("%d factorial is %llu\n",n,f);
	}
	return 0;
}

 // -------------------------------------------

// #include <stdio.h>

// int main()
// {
// 	int n,a;
// 	long int s;
// 	printf("Enter number: ");
// 	scanf("%d",&n);
// 	s=1;
// 	a=n;
// 	for (n; n>1; n--){
// 		s=s*n;
// 	}
// 	printf("%d factorial is %li\n",a,s);
// 	return 0;
// }