#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	if (a == 1) {
		if (b == 1 || b == 2 || b == 3) {
			printf("angry");
		}
		else {
			printf("no angry");
		}
	}
	else if (a == 2) {
		if (b == 1 || b == 2 || b == 3) {
			printf("angry");
		}
		else {
			printf("no angry");
		}
	}
	else {
		if (a == 3 && (b == 1 || b == 2)) {
			printf("angry");
		}
		else {
			printf("no angry");
		}
	}
	return 0;
}