#include <stdio.h>

int main()
{
	int n;
	printf("Enter the no.: ");
	scanf("%d", &n);
	int m = n;
	for (int i=0; i<n; i++){
		for (int k=0; k<i; k++){
			printf("  ");	
		}
		for (int j=0; j<m; j++){
			printf("%d ", i);
		}
		printf("\n");
		m--;
	}	
	return 0;
}