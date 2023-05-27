#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	if (a > b)
	{
		printf("%d", a - b);
	}
	else
	{
		printf("%d", b - a);
	}
	return 0;
}