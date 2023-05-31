#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a > 170 && b > 170 && c > 170) {
		printf("PASS");
	}
	else {
		printf("CRASH");
	}
	return 0;
}