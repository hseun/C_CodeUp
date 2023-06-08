#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int a, d, n;
	scanf("%d %d %d", &a, &d, &n);
	for (int i = 2; i <= n; i++)
	{
		a += d;
	}
	printf("%d", a);
	return 0;
}