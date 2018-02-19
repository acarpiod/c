#define _ISOC99_SOURCE

#include <stdio.h>
#include <math.h>


int main()
{
	double input;
	int output;
	scanf("%lf",&input);

	output = round(input);
	printf("La salida es: %d\n",output);
	return 0;
}
