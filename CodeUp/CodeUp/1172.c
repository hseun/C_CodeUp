#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int a, b, c, num1, num2, num3;
	scanf("%d %d %d", &a, &b, &c);
	num1 = a > b ? a : b;
	num1 = num1 > c ? num1 : c;
	num3 = a > b ? b : a;
	num3 = num3 > c ? c : num3;
	num2 = (a + b + c) - (num1 + num3);
	printf("%d %d %d", num3, num2, num1);
	return 0;
}