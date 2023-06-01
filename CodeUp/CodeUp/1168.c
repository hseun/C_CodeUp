#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	if (b <= 2)
	{
		printf("%d", 2012 - ((a / 10000) + 1900) + 1);
	}
	else
	{
		printf("%d", 2012 - ((a / 10000) + 2000) + 1);
	}
	return 0;
}