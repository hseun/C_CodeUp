#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int n, a, count = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &a);
		if (a % 2 != 0) {
			count++;
		}
	}
	printf("%d", count);
	return 0;
}