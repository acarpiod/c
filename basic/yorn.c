#include <stdio.h>
#include <stdio_ext.h>

int main()
{
	char ch;

	printf("Would you like me to send your password to the bad guys?\n");

	for(;;)
	{
		printf("Enter Y or N (Y/N)?");
 		ch = getchar();
		if(ch=='N' || ch=='n')
		{
			printf("Well, then: your password is safe!\n");
			break;
		}
		else if(ch=='Y' || ch=='y')
		{
			printf("Okay. Sending your password!\n");
			break;
		}
		else
		{
			printf("You must enter Y or N!\n");
			ungetc(ch,stdin);	/* return ch to stdin */
			__fpurge(stdin);	/* Eliminate other keys */
		}
	}
	return(0);
}
