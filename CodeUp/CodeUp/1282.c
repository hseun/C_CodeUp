#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int n, k = 0, t;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		if ((n >= i * i) && (n < (i + 1) * (i + 1))) {
			k = n - i * i;
			t = i;
			break;
		}
	}
	printf("%d %d", k, t);
	return 0;
}