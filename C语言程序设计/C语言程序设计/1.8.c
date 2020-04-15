#include<stdio.h>
q1_8()
{
	int blank, l, tab,c;
	blank = 0;
	l = 0;
	tab = 0;
	while (c =getchar() != EOF) 
	{
		putchar(c);
		if (c == '\0')
		{
			blank++;
		}
		else if (c == '\n')
		{
			l++;
		}
		else if (c == '\t')
		{
			tab++;
		}
	}
	printf("%d\t%d\t%d", blank, l, tab);
}