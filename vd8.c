#include <stdio.h>

void main8()
{
	int num[5], ctr, sum = 0;
	int sum_arr(int num_arr[])
	{
		int i, total;
		for(i=0,total=0;i<5;i++)
			total+=num_arr[i];
		return total;
	}
	for(ctr=0;ctr<5;ctr++)
	{
		printf("\nEnter number %d : ",ctr+1);
		scanf("%d",&num[ctr]);
	}
	sum = sum_arr(num);
	printf("\nThe sum of the array is %d", sum);
}

