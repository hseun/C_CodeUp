#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int a;
	scanf("%d", &a);
	if (a <= 10)
	{
		printf("����");
	}
	else if (a <= 20)
	{
		printf("��ü��");
	}
	else
	{
		printf("��");
	}
	return 0;
}