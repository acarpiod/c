/* #include <stdio.h>  n soporta la función fpurge() */
#include <stdio_ext.h>	/* __purge() en vez de purge() */


int main()
{
	char letter,number;

	printf("What is your favorite letter?");
	letter = getchar();
	__fpurge(stdin);		/* fpurge (stdin) for UNIX */
	printf("What is your favorite number?");
	number = getchar();
	printf("Thank you!\n%c is your favorite letter and %c is your favorite number.\n",letter,number);
	return(0);
}

