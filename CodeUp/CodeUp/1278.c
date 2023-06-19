#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int n, count = 0;
	scanf("%d", &n);
	for (long long int i = 1; ; i *= 10)
	{
		if (n / i >= 1)
			count++;
		else
			break;
	}
	printf("%d", count);
	return 0;
}