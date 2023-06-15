#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int a, b, c, n, result;
	scanf("%d %d %d %d", &a, &b, &c, &n);
	for (int i = 1; i < n; i++)
	{
		result = a * b + c;
		a = result;
	}
	if (n == 1) {
		result = a;
	}
	printf("%d", result);
	return 0;
}