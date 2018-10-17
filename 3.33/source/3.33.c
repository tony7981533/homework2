#include<stdio.h>
#include<stdlib.h>
int plus1, plus2,length, breadth;
int main()
{
	printf("請輸入length:");
	scanf_s("%d", &length);
	printf("請輸入breadth:");
	scanf_s("%d", &breadth);
	for (plus1 = 1;plus1 <= breadth; plus1++)
	{
		printf("+");
	}
	printf("\n");
	for (plus1 = 1; plus1 <= (length - 2);plus1++)
	{
		printf("+");
		for (plus2 = 1; plus2 <= (breadth - 2);plus2++)
		{
			printf(" ");
		}
		printf("+\n");
	}
	for (plus1 = 1;plus1 <= breadth; plus1++)
	{
		printf("+");
	}
	printf("\n");
	system("pause");
	return 0;
}