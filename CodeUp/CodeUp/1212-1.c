#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b && a > c) {
		if (a < b + c) {
			printf("yes");
		}
		else {
			printf("no");
		}
	}
	else if (b > a && b > c) {
		if (b < a + c) {
			printf("yes");
		}
		else {
			printf("no");
		}
	}
	else {
		if (c < a + b) {
			printf("yes");
		}
		else {
			printf("no");
		}
	}
	return 0;
}