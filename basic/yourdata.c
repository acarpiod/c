#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

int main()
{
	char input[20];
	int age;
	float height;

	printf("Enter your age in years:");
	age = 12* atoi(fgets(input,3,stdin));
	__fpurge(stdin);
	

	printf("Enter your height in inches:");
	height = 2.2*atof(fgets(input,3,stdin));

	printf("You are %d month old\n",age);
	printf("and %f centimeters tall\n",height);
	return(0);
}

