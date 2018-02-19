#include <stdio.h>

int main()
{
	int packet;

	printf("Processing 1000 packets:\n");
	for(packet=1;packet<=1000;packet=packet+1)
	{
		printf("Doing amazing things with packet#%d\n",packet);
	}
	return(0);
}

