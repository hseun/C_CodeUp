#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	if (a > b)
	{
		for (; b <= a; b++)
		{
			printf("%d ", b);
		}
	}
	else
	{
		for (; a <= b; a++)
		{
			printf("%d ", a);
		}
	}
	return 0;
}