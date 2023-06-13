#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	while (a <= b)
	{
		if (a % 2 != 0) {
			printf("%d ", a);
			a++;
		}
		else {
			a++;
		}
	}
	return 0;
}