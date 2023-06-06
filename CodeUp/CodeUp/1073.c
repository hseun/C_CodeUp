#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int a;
	while (1)
	{
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		printf("%d ", a);
	}
	return 0;
}