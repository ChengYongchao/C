#include<stdio.h>
int q1_3()
{
	int fahr, celsius;
	int lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	printf("»ªÊÏ¶È\tÉãÊÏ¶È\n");
	while (fahr < upper) 
	{
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr += step;
	}
}