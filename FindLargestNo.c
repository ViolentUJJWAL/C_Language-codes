#include <stdio.h>

int p;

int largest(int *arr, int n){
	int max = *(arr);
	for (int i=1; i<n; i++){
		if (max < *(arr + i)){
			max = *(arr + i);
			p = i;
		}
	}
	return max;
}

int main()
{
	printf("Enter the size of array: ");
	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i=0; i<n; i++){
		int a;
		printf("Enter %d index element: ", i);
		scanf("%d", &a);
		arr[i]=a;
	}	
	for (int i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
	printf("\nThe largest element of array is %d", largest(&arr[0], n));
	printf(" in %d index",p);
	return 0;
}