#include <stdio.h>
#include <string.h>
void main6()
{
	char hotelname1[15] = "Sea View";
	char hotelname2[15] = "Sea Breeze";
	
	printf("\nThe old name is %s", hotelname1);
	strcpy(hotelname1,hotelname2);
	printf("\nThe new name is %s", hotelname1);

}
