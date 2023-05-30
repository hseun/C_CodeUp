#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int a;
	scanf("%d", &a);
	if ((a >= 30 && a <= 40) || (a >= 60 && a <= 70))
	{
		printf("win");
	}
	else
	{
		printf("lose");
	}
	return 0;
}