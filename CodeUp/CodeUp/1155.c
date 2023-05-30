#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int a;
	scanf("%d", &a);
	if (a % 7 == 0)
	{
		printf("multiple");
	}
	else
	{
		printf("not multiple");
	}
	return 0;
}