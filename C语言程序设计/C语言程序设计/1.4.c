#include<stdio.h>
q1_4()
{
	//���϶�ת���϶�
	double celsius;
	printf("���϶�\t���϶�\n");
	for (celsius = -17; celsius <= 100; celsius++)
	{
		printf("%3.1f\t%3.1f\n", celsius, (celsius * 9 / 5 + 32));
	}

}