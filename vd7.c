#include <stdio.h>
#include <string.h>
void main7()
{
	char compname[20] = "Microsoft";
	int len, ctr;
	len = strlen(compname);
	for(ctr=0;ctr<len;ctr++)
	{
		printf("%c * ",compname[ctr]);
	}
}
