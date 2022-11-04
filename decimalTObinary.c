#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	scanf("%d",&n);
	int b[50];
	int a=0;
	while (n!=0){
		b[a] = (n%2);
		n=n/2;
		a++;
	}
	for (int i=a-1; i>=0; i--){
		printf("%d", b[i]);
	}
	return 0;
}