#include <stdio.h>
#include <stdio_ext.h>

int main()
{
	char fname[7], lname[7];

/* Se utilizó la función fgets() porque gets esta "prohibida" ya que puede incurrir en problemas de seguridad */

	printf("What is your last name?");
	fgets(lname,7,stdin);
	__fpurge(stdin);
	printf("What is your first name?");
	fgets(fname,7,stdin);
	printf("Pleased to meet you, %s %s!\n",fname,lname);
	return(0);
}

