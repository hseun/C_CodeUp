#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int n, k, result = 1;
	scanf("%d %d", &n, &k);
	for (int i = 1; i <= k; i++)
	{
		result *= n;
	}
	printf("%d", result);
	return 0;
}