#include <stdio.h>
#include <string.h>

void html(char * string){
	int it= 0;
	int index=0;
	for (int i=0; i<strlen(string); i++){
		if (string[i]=='<'){
			it=1;
			continue;
		}
		else if (string[i]=='>'){
			it=0;
			continue;
		}
		printf("%c\n",string[i]);
		if (it==0){
			string[index]=string[i];
			index++;
		}
		
	}
	string[index]='\0';

	while(string[0] ==' '){
        //Shift the string to the left
        for (int i = 0; i < strlen(string); i++)
        {
            /* code */
            string[i] = string[i+1];
        }
    }
    //Remove the trailing spaces from the end
    while(string[strlen(string) - 1] == ' ')
    {
        string[strlen(string) - 1] = '\0';

    }
}

int main()
{
	char string[]="<h1>   this is haeding  </h1>";
	html(string);
	puts(string);
	return 0;
}