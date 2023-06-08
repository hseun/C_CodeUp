#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	long long int a, m, d, n;
	scanf("%lld %lld %lld %lld", &a, &m, &d, &n);
	for (int i = 1; i < n; i++)
	{
		a = a * m + d;
	}
	printf("%lld", a);
	return 0;
}