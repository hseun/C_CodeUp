#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	long long int a, r, n;
	scanf("%lld %lld %lld", &a, &r, &n);
	for (int i = 1; i < n; i++);
	{
		a = a * r;
	}
	printf("%lld", a);
	return 0;
}