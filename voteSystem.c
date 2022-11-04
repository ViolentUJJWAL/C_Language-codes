#include <stdio.h>

int main(){

	while (-1){
		int n;
		printf("<----------Voting System---------->\n");
		printf("Enter your age: ");
		scanf("%d",&n);

		if (0<n && n<17) {
			printf("you are not eligible for Voting\n");
			int a=18-n;
			printf("you are eligible to Voting after %d year\n", a);
		}
		else if (18<=n && n<60) {
			printf("You are eligible for Voting\n");
			printf("give your importent and valuable vote\n");
		}
		else if (60<=n && 150>n) {
			printf("you are eligible for Voting\n");
			printf("You are senior citizen and experienced parson\n");
		}
		else {
			printf("your age is not valid\n");
		}
	}
	return 0;
}