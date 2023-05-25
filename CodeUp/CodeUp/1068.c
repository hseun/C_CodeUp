#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int a;
	scanf("%d", &a);
	if (a >= 90) {
		printf("A");
	}
	else if (a >= 70) {
		printf("B");
	}
	else if (a >= 40) {
		printf("C");
	}
	else {
		printf("D");
	}
	return 0;
}