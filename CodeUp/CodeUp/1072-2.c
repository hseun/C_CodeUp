#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int a, b;
	scanf("%d", &a);
reget:
	scanf("%d", &b);
	printf("%d\n", b);
	a--;
	if (a > 0)
	{
		goto reget;
	}
	return 0;
}