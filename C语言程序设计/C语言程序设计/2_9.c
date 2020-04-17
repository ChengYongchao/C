#include<stdio.h>
int bitCount(unsigned int x)
{
	int count = 0;
	while (x)
	{
		x &= (x - 1);
		count++;
	}
	return count;
}