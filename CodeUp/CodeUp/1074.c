#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int a;
	scanf("%d", &a);
	while (a != 0)
	{
		printf("%d\n", a);
		a--;
	}
	return 0;
}