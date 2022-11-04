#include <stdio.h>
#include <string.h>

struct driver{
	char Name[52];
	char driverno[52];
	char route[52];
	char phoneno[52];
	int Age;
}driver;


int main()
{
	int n;
	printf("Enter total no. of Driver: ");
	scanf("%d", &n);
	for (n; n>0; n--){
		printf("Enter Your Name: ");
		scanf("%s", &driver.Name);
		printf("Enter Your Age: ");
		scanf("%d", &driver.Age);
		printf("Enter DL no.: ");
		scanf("%s", &driver.driverno);
		printf("Enter route name: ");
		scanf("%s", &driver.route);
		printf("Enter your Phone No.: ");
		scanf("%s", &driver.phoneno);

		printf("\nHello my Name is %s i %d year old and My Driver Lisense Number is (%s).\nMy Route is %s And for contect to %s.\n", 
			driver.Name, driver.Age, driver.driverno, driver.route, driver.phoneno);
	}
	
	return 0;
}