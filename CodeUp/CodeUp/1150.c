#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int a, b, c, result;
	scanf("%d %d %d", &a, &b, &c);
	result = a > b ? b : a;
	result = result > c ? c : result;
	printf("%d", result);
	return 0;
}