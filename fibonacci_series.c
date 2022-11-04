#include <stdio.h>

int fibonacci(int n, int a, int b)
{
	int s=a+b;
	if (s >= n)
	{	
		return s;
	}
	printf("%d\n",s);
	a=b;
	b=s;
	return fibonacci(n,a,b);
}

int main()
{
	while (-1){
		int n, a=0,b=1;
		printf("Enter Number: ");
		scanf("%d",&n);
		printf("fibonacci series\n");
		printf("%d\n%d\n",a,b);
		int f=fibonacci(n,a,b);
	}
	return 0;
}