#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int a, num1, num2, result;
	scanf("%d", &a);
	num1 = a / 10;
	num2 = (a % 10) * 10;
	result = (num1 + num2) * 2;
	if (result >= 100)
	{
		result %= 100;
	}
	printf("%d\n", result);
	if (result <= 50)
	{
		printf("GOOD");
	}
	else
	{
		printf("OH MY GOD");
	}
	return 0;
}