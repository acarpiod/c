#include <stdio.h>

int main()
{
	float temp;

	printf("What is the temperature outside?");
	scanf("%f",&temp);
	if(temp>=65 && temp<=75)
	{
		printf("My how pleasant!\n");
	}
	else
		printf("The temperature could be better.\n");
	return(0);
}

