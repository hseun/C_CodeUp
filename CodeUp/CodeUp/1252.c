#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		printf("%d ", i);
	}
	return 0;
}