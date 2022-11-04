#include <stdio.h>

void addition(int m, int n, int matrix[m][n], int matrix1[m][n]){
	int matrixOut[m][n];
	for (int a=0; a<m; a++){
		for (int b=0; b<n; b++){
			matrixOut[a][b]=matrix[a][b]+matrix1[a][b];
			printf(" %d  ", matrixOut[a][b]);
		}
		printf("\n");
	}
}

void sub(int m, int n, int matrix[m][n], int matrix1[m][n]){
	int matrixOut[m][n];
	for (int a=0; a<m; a++){
		for (int b=0; b<n; b++){
			matrixOut[a][b]=matrix[a][b]-matrix1[a][b];
			printf("%d  ", matrixOut[a][b]);
		}
		printf("\n");
	}
}


int main()
{
	int x,y;
	printf("Enter the size: ");
	scanf("%d", &x);
	scanf("%d", &y);

	int matrix[x][y];
	for (int i=0; i<x; i++){
		for (int j=0; j<y; j++){
			printf("Enter the element in %d row and %d col : ", i+1,j+1);
			scanf("%d", &matrix[i][j]);
			printf("\n");
		}
	}

	for (int i=0; i<x; i++){
		for (int j=0; j<y; j++){
			printf("%d  ", matrix[i][j]);
		}
		printf("\n");
	}	
	printf("\n");

	int matrix1[x][y];
	for (int i=0; i<x; i++){
		for (int j=0; j<y; j++){
			printf("Enter the element in %d row and %d col : ", i+1,j+1);
			scanf("%d", &matrix1[i][j]);
			printf("\n");
		}
	}

	for (int i=0; i<x; i++){
		for (int j=0; j<y; j++){
			printf("%d  ", matrix1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	while (-1){
		int task;
		printf("1 for Addition\n2 for Subtraction\nEnter- ");
		scanf("%d", &task);
			if (task==1){
				addition(x ,y ,matrix ,matrix1);
			}
			else if (task==2){
				sub(x ,y ,matrix ,matrix1);
			}
	}
	return 0;
}
