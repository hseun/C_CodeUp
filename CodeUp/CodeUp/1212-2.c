#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a < b + c && b < a + c && c < a + b)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}