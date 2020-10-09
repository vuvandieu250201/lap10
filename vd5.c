#include <stdio.h>
#include <string.h>

main5()
{
	char str1[15] = "New York";
	char str2[15] = "Washington";
	char chr = 'a', *loc;
	
	system("cls");
	
	loc = strchr(str1, chr);
	if(loc!=NULL)
		printf("\n%c occurs in %s",chr,str1);
	else
		printf("\n%c does not occur in %s",chr,str1);
	
	loc = strchr(str2, chr);
	if(loc!=NULL)
		printf("\n%c occurs in %s",chr,str2);
	else
		printf("\n%c does not occur in %s",chr,str2);
	getch();
}

