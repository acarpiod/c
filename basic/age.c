#include <stdio.h>
#include <stdlib.h>

int main()
{
	char age;
	
	printf("Introduce your age:"); /* put you age here */
	scanf("%s",&age);
	age = atoi(&age);
	printf("In 25 years you'll be %d.\n",age+=25);
	if(age>100)
		printf("You will probably dead!\n");
	return(0);
}

