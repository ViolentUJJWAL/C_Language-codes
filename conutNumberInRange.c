#include <stdio.h>

static int cont = 0;
void count(){
	cont++;
}

int digit(int a){
	int n=1;
	while(a!=0){
		a = a/10;
		n *= 10;
	}
}

int main()
{
	int a;
	int b;
	int s;
	printf("Enter the starting no: ");
	scanf("%d", &a);
	printf("Enter the endind no.: ");
	scanf("%d", &b);
	printf("Enter no. of count in range: ");
	scanf("%d", &s);
	int d = digit(s);
	for (int j=a; j<=b; j++){
		int i = j;
		while (i!=0){
			int m= i%d;
			if (m==s){
				count();
			}
			i = i/d;
		}
	}
	printf("Number %d occurs %d times in the range from %d to %d", s, cont, a,b);
	return 0;
}