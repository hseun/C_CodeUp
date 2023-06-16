#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int n, a, num1, num2, num3;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &a);
		if (i == 1)
			num1 = a;
		if (i == (n + 1) / 2)
			num2 = a;
		if (i == n)
			num3 = a;
	}
	printf("%d %d %d", num1, num2, num3);
	return 0;
}