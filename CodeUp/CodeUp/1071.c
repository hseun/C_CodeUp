#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int a;
reload:
	scanf("%d", &a);
	if (a != 0)
	{
		printf("%d\n", a);
		goto reload;
	}
	return 0;
}