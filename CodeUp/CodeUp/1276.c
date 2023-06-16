#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int n, result = 1;
	scanf("%d", &n);
	for (int i = n; i >= 1; i--)
	{
		result *= i;
	}
	printf("%d", result);
	return 0;
}