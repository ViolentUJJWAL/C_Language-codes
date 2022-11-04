#include <stdio.h>
int main(int argc, char const *argv[])
{
	int s;
	for (int a;a=1;a++){
		printf("\nUnit Conversion\n1 for [km to miles]\n2 for [Inches to foot]\n3 for [cms to inches]\n4 for [pound to kgs]\n5 for [inches to meters]\n0 for Exit\nEnter - ");
		scanf("%d", &s);
		if (s==1){
			float i;
			printf("Enter km : ");
			scanf("%f",&i);
			printf("%.3f km is %f miles", i, i*0.621371);
		}
		else if (s==2){
			float i;
			printf("Enter inches : ");
			scanf("%f",&i);
			printf("%.3f inches is %f feet", i, i*0.08333);
		}
		else if (s==3){
			float i;
			printf("Enter cm : ");
			scanf("%f",&i);
			printf("%.3f cm is %f inches", i, i*0.393701);
		}
		else if (s==4){
			float i;
			printf("Enter pound : ");
			scanf("%f",&i);
			printf("%.3f pound is %f kg", i, i*0.453592);
		}
		else if (s==5){
			float i;
			printf("Enter inches : ");
			scanf("%f",&i);
			printf("%.3f inches is %f meters", i, i*0.0254);
		}
		else if (s==0 || s<0){
			printf("Thanks for using.");
			break;
		}
		else{
			printf("Enter valid number");
		}
	}
	return 0;
}