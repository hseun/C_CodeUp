#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int a;
	scanf("%d", &a);
	if (a < 10)
	{
		printf("small");
	}
	else
	{
		printf("big");
	}
	return 0;
}