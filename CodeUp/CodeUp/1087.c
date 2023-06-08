#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int a, result = 0;
	scanf("%d", &a);
	for (int i = 1; result < a; i++)
	{
		result += i;
	}
	printf("%d", result);
	return 0;
}