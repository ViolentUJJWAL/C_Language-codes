#include <stdio.h>
#include <string.h>

void rev(char *str, int len){
	for (int i=0, j= len; i<j; i++,j-- ){
		char temp = *(str + i);
		*(str + i) = *(str + j);
		*(str + j) = temp;
	}
}

int main()
{
	char str[500];
	gets(str);
	int len = strlen(str); 
	rev(str, len-1);
	printf("%s\n", str);
	printf("%s", strrev(str));	
	return 0;
}