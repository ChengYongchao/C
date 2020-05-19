#include<stdio.h>


int q2()
{
	unsigned long int i, j, k;

	printf("input the number\n");
	scanf("%d", &i);
	if (i % 2 == 0)
	{
		j = i >> 1;
	}
	else
	{
		j = (i >> 1) + 1;
	}

	for (k = 0; k < j; k++)
	{
		printf("%d = %d + %d \n", i, k, i - k);
	}
	return 0;
}