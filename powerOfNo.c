#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	printf("Enter the no.: ");
	scanf("%d", &n);
	int m;
	printf("Enter the power of no.: ");
	scanf("%d", &m);
	int p=1;
	for (int i=0; i<m; i++){
		p *= n;
	}	
	printf("The %d to the power of %d is %d\n",n,m,p );
	printf("Ans. by math.h is %.f", pow(n,m));
	return 0;
}