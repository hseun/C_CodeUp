#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if (a + b + c + d == 1) {
		printf("µµ");
	}
	if (a + b + c + d == 2) {
		printf("°³");
	}
	if (a + b + c + d == 3) {
		printf("°É");
	}
	if (a + b + c + d == 4) {
		printf("À·");
	}
	if (a + b + c + d == 0) {
		printf("¸ð");
	}
	return 0;
}