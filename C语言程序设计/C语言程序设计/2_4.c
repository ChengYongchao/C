#include<stdio.h>
#include<string.h>

void change(char s[], int index);

void squeeze(char s1[], char s2[])
{
	int index = 0;
	for (int i = 0; s1[i] != '\0'; i++)
	{
		for (int j = 0; s2[j] != '\0'; j++)
		{
			if (s1[i] == s2[j])
			{
				change(&s2, j);
			}
		}
	}
	printf("%s\n",s2);
}

void change(char s[], int index)
{
	for (int i = 0; s[i] != '\0'; i++)
	{
		printf("%s", s[i]);
	}
	while (s[index] != '\0')
	{
		s[index] = s[++index];
	}
}