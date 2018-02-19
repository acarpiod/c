#include <stdio.h>

int main()
{
	char a;
	int x;

	for(x=1;x<10;x=x+1)
	{
		for(a='A';a<='I';a=a+1)
		{
			printf("%d%c   ",x,a);
		}
		putchar('\n');
	}
	return(0);
}

