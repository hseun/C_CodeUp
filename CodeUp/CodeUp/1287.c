#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= n * i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}