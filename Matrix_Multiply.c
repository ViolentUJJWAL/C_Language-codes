#include <stdio.h>
#include "metrix.c"

void makeMatrix(int r, int c, int matrix[r][c]){
	for (int i=0;i<r;i++){
		for (int j=0;j<c;j++){
			printf("Enter element in %d row and %d col: ",i+1,j+1);
			scanf("%d", &matrix[i][j]);
		}
	}
	for (int i=0;i<r;i++){
		printf("|");
		for (int j=0;j<c;j++){
			printf("  %d  ", matrix[i][j]);
		}
		printf("|\n");
	}
}

void MatrixMul(int r,int c,int r1, int c1, int matrix[r][c], int matrix1[r1][c1]){
	printf("\nMultiply is\n");
	for (int i=0; i<r; i++){
		printf("|");
		for (int j=0; j<c1; j++){
			int ad=0;
			for (int k=0; k<r1; k++){
				int mx=matrix[i][k];
				int mx2=matrix1[k][j];
				ad = ad + (mx*mx2);
			}
			printf("  %d  ", ad);
		}
		printf("|\n");
	}
}

int main()
{
	int r,c;
	printf("enter Row Size of Matrix1: ");
	scanf("%d",&r);
	printf("enter Col Size of Matrix1: ");
	scanf("%d",&c);
	int matrix[r][c];
	makeMatrix(r, c, matrix);

	int r1,c1;
	printf("enter Row Size of Matrix1: ");
	scanf("%d",&r1);
	printf("enter Col Size of Matrix1: ");
	scanf("%d",&c1);
	int matrix1[r1][c1];
	makeMatrix(r1, c1, matrix1);

	int task;
	printf("1 for ADD\n2 for SUB\n3 for Mul\nEnter-");
	scanf("%d", &task);

	if (task==1){
		if (r==r1 && c==c1){
		addition(r ,c ,matrix ,matrix1);
		}
		else{
			printf("Not solve");
		}
	}
	else if (task==2){
		if (r==r1 && c==c1){
			sub(r ,c ,matrix ,matrix1);
		}
		else{
			printf("Not solve");
		}
	}
	else if (task==3){
		if (r==c1){
			MatrixMul(r,c,r1,c1,matrix,matrix1);
		}
		else{
			printf("This matrix not Solve");
		}
	}
	return 0;
}