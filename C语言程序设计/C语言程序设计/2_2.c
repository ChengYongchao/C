#include<stdio.h>


int htoi(char s[])
{
	if (s[0] == '0')
	{
		if (s[1] != 'X' && s[1] != 'x')
		{
			return -1;
		}
	}
	else
	{
		return -1;
	}
	int index = 2;
	int currentNum;
	int result = 0;
	while (s[index] != '\0')
	{
		if (s[index] >= '0' && s[index] <= '9')
		{
			currentNum = s[index] - '0';
		}
		else if (s[index] >= 'a' && s[index] <= 'f')
		{
			currentNum = s[index] - 'a' + 10;
		}else if(s[index] >= 'A' && s[index] <= 'F')
		{
			currentNum = s[index] - 'A' + 10;
		}
		else
		{
			return -1;
		}
		result = result * 16 + currentNum;
		index++;
	}
	return result;
}