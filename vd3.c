#include <stdio.h>
#include <string.h>

main3()
{
	char firstname[15], lastname[15];
	system("cls");
	
	printf("\nEnter your firstname : ");
	scanf("%s",&firstname);
	
	printf("\nEnter your lastname : ");
	scanf("%s",&lastname);
	
	strcat(firstname, lastname);
	
	printf("%s", firstname);
	getch();
}
