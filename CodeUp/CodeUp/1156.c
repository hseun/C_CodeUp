#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int a;
	scanf("%d", &a);
	if (a % 2 == 0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	return 0;
}