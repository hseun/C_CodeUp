#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int a, x;
	scanf("%d %d", &a, &x);
	printf("%d", a << x);
	return 0;
}