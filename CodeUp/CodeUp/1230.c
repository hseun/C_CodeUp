#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a <= 170) {
		printf("CRASH %d", a);
	}
	else if (b <= 170) {
		printf("CRASH %d", b);
	}
	else if (c <= 170) {
		printf("CRASH %d", c);
	}
	else {
		printf("PASS");
	}
	return 0;
}