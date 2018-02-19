#include <stdio.h>
#include <stdio_ext.h>

int main()
{
	int agent;
	char code;

	printf("Enter your agent number:");
	scanf("%d",&agent);
	__fpurge(stdin);
	printf("Enter your single-digit code key:");
	scanf("%c",&code);
	if(agent==7 && code=='B' || code=='b')
	{
		puts("Welcome aboard, James Bond.");
		puts("You may commence with operation FreeCell.");
	}
	else
	{
		puts("The authorities have been notified");
		puts("o this illegal access.");
	}
	return(0);
}
