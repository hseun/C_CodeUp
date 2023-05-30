#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int a;
	scanf("%d", &a);
	if ((a >= 50 && a <= 70) || a % 6 == 0)
	{
		printf("win");
	}
	else
	{
		printf("lose");
	}
	return 0;
}