#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int a, b;
	scanf("%d", &a);
reget:
	if (a != 0)
	{
		scanf("%d", &b);
	}
	if (a-- != 0)
	{
		printf("%d\n", b);
		goto reget;
	}
	return 0;
}