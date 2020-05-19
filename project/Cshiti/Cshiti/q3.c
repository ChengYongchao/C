#include<stdio.h>

int inverse(char* p)
{
	if (*p == '\0')
		return 0;
	inverse(p + 1);
	printf("%c", *p);
}
int inverse2(FILE* fread, FILE* fwrite)
{
	//{0} ³õÊ¼»¯Îª0
	char buf[1024] = { 0 };
	if (!fgets(buf, sizeof(buf), fread))
	{
		return 0;
	}
	inverse2(fread, fwrite);
	fputs(buf, fwrite);
	return 0;
}
