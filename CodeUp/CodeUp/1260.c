#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int a, b, result = 0;
	scanf("%d %d", &a, &b);
	for (; a <= b; a++)
	{
		if (a % 3 == 0) {
			result += a;
		}
	}
	printf("%d", result);
	return 0;
}