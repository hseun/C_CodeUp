#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a >= b)
	{
		if (a <= c)
			printf("%d", a);
		else if (b >= c)
			printf("%d", b);
		else if (b <= c)
			printf("%d", c);
	}
	else if (a <= b)
	{
		if (a >= c)
			printf("%d", a);
		else if (b <= c)
			printf("%d", b);
		else if (b >= c)
			printf("%d", c);
	}
	return 0;
}