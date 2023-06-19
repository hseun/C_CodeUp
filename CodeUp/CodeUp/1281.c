#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int a, b, result = 0;
	scanf("%d %d", &a, &b);
	if (a % 2 != 0) {
		printf("%d", a);
		result += a;
		a++;
	}
	for (; a <= b; a++)
	{
		if (a % 2 == 0) {
			printf("-%d", a);
			result -= a;
		}
		else {
			printf("+%d", a);
			result += a;
		}
	}
	printf("=%d", result);
	return 0;
}