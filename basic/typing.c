#include <stdio.h>

int main()
{
	char ch;
	puts("Typing Program");
	puts("Type away; press '~' to quit:");
	for(;;)
	{
		ch=getchar();
		if(ch=='~' || ch=='\'')
		{
			break;
		}
	}
	return(0);
}
