#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	char opretion;
	opretion = argv[2][0];
	int a,b;
	a= atoi(argv[1]);
	b= atoi(argv[3]);
	// if (opretion=='+'){
	// 	printf("%d", a+b);
	// }
	// else if (opretion=='-'){
	// 	printf("%d", a-b);
	// }
	// else if (opretion=='*'){
	// 	int s = a * b;
	// 	printf("%d", s);
	// }
	// else if (opretion=='/'){
	// 	printf("%f", (float)a/(float)b);
	// }
	switch(opretion){
		case '+':
			printf("%d", a+b);
			break;
		case '-':
			printf("%d", a-b);
			break;
		case 'a':
			printf("%d", a*b);
			break;
		case '/':
			printf("%d", a/b);
			break;
		default:
			printf("%d", 0);
	}
	return 0;
}