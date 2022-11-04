#include <stdio.h>

int main()
{
	int n;
	printf("Enter the no.: ");
	scanf("%d", &n);
	for (int i=0; i<n; i++){
		if (i==0 || i==(n-1)){
			for (int j=0; j<n; j++){
				printf("%c ", '*');
			}
		}
		else{
			for (int j=0; j<n; j++){
				char s = ' ';
				if (j==0 || j==(n-1)){
					s = '*';
				}
				printf("%c ", s);
			}
		}
		printf("\n");
	}	
	return 0;
}