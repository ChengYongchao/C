 
#include<stdio.h>
#include<stdlib.h>

int nixu(int size,int * a,FILE *fp);
int copy(int size, int* a, FILE* fp);


int q1_readFile(int mode)
{
	//ģʽ�жϣ�ǿ��ʹ�ú���ָ��
	int (*p)(int size, int* a, FILE * fp);
	if (mode == 0)
	{
		p = nixu;
	}
	else if (mode == 1)
	{
		p = copy;
	}
	else
	{
		printf("��֧��ģʽ");
		exit(-1);
	}

	int MAX = 10;
	int* a = (int*)malloc(MAX * sizeof(int));
	int* b;
	
	FILE* fp1;
	FILE* fp2;

	fp1 = fopen("a.txt", "r");

	if (fp1 == NULL)
	{
		printf("a.txt�ļ�������");
		exit(-1);
	}

	fp2 = fopen("b.txt", "w");
	if (fp2 == NULL)
	{
		printf("b.txt�ļ�������");
		exit(-1);
	}

	int i = 0;
	int j = 0;

	while (fscanf(fp1, "%d", &a[i]) != EOF)
	{
		i++;
		j++;
		if (i > MAX)
		{
			MAX = 2 * MAX;
			b = (int*)realloc(a, MAX * sizeof(int));

			if (b == NULL)
			{
				printf("����ʧ��");
				exit(-1);
			}
			a = b;
		}
	}
	
	int res = (*p)(j, a, fp2);
	fclose(fp1);
	fclose(fp2);
	return res;
}

int nixu(int size, int* a, FILE * fp)
{
	for (; --size >= 0;)
	{
		fprintf(fp, "%d\n", a[size]);
	}
}

int copy(int size, int* a, FILE* fp)
{
	for (int i = 0; i < size; i++) {
		fprintf(fp, "%d\n", a[i]);
	}
}