#include <stdio.h>

#define DISTANCE 378921.46
#define SPEED 140

int main()
{
	float duration,days;

	duration = DISTANCE / SPEED;
	days = duration / 24;

	printf("The moon is %f km away.\n",DISTANCE);
	printf("Traveling at %f kph, ",SPEED);
	printf("it would take %f hours or %f days to drive to the moon. \n",duration,days);
	return(0);
}

