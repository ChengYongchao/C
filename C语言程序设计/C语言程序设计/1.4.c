#include<stdio.h>
q1_4()
{
	//摄氏度转华氏度
	double celsius;
	printf("摄氏度\t华氏度\n");
	for (celsius = -17; celsius <= 100; celsius++)
	{
		printf("%3.1f\t%3.1f\n", celsius, (celsius * 9 / 5 + 32));
	}

}