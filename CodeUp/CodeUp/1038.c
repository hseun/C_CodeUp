#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	long long int a, b;
	scanf("%lld %lld", &a, &b);
	printf("%lld", a + b);
	return 0;
}