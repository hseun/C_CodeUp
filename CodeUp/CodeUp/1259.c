#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int n, result = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0) {
			result += i;
		}
	}
	printf("%d", result);
	return 0;
}