#include <stdio.h>
#include <math.h>

int prime(int a){
	int n = (int)sqrt(a);
	if (n<2){
		if (a==2 || a==3){
			return 1;
		}
		else{
			return 0;
		}
	}
	else{
		int p = 0;
		for (int i=2; i<n+1; i++){
			if ((a%i) == 0){
				p++;
			}
		}
		if (p>0){
			return 0;
		}
		else{
			return 1;
		}
	}
}

int main()
{
	int a;
	printf("1 for (1 to n)range\n2 for range\n3 for check prime\nEnter: ");
	scanf("%d", &a);
	if (a==1 || a==2){
		int i;
		int n;
		if (a==1){
			i=1;
		}
		else{
			printf("Enter starting range: ");
			scanf("%d", &i);
		}
		printf("Enter Ending range: ");
		scanf("%d", &n);
		for (i; i<n; i++){
			if (prime(i)){
				printf("%d  ", i);
			}
		}
	}
	else{
		int n;
		printf("Enter number: ");
		scanf("%d", &n);
		if (prime(n)){
			printf("%d is prime no.", n);
		}
		else{
			printf("%d is not prime no.", n);
		}
	}
	return 0;
}