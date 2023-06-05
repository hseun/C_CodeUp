#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int a, b;
	char c;
	scanf("%d%c%d", &a, &c, &b);
	if (c == '+') {
		printf("%d", a + b);
	}
	else if (c == '-') {
		printf("%d", a - b);
	}
	else if (c == '*') {
		printf("%d", a * b);
	}
	else {
		printf("%.2f", (float)a / b);
	}
	return 0;
}