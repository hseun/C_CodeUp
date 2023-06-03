#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int a;
	scanf("%d", &a);
	if (a > 0)
	{
		printf("양수");
	}
	else if (a < 0)
	{
		printf("음수");
	}
	else
	{
		printf("0");
	}
	return 0;
}