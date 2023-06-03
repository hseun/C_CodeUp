#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int a, b, c;
	scanf("%d %d", &a, &b);
	if (b % a == 0)
	{
		c = b / a;
		printf("%d*%d=%d", a, c, b);
	}
	else if (a % b == 0)
	{
		c = a / b;
		printf("%d*%d=%d", b, c, a);
	}
	else
	{
		printf("none");
	}
	return 0;
}