#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	if (a % 2 == 0) {
		printf("¦��+");
	}
	if (a % 2 != 0) {
		printf("Ȧ��+");
	}
	if (b % 2 == 0) {
		printf("¦��=");
	}
	if (b % 2 != 0) {
		printf("Ȧ��=");
	}
	if (a % 2 == b % 2) {
		printf("¦��");
	}
	if (a % 2 != b % 2) {
		printf("Ȧ��");
	}
	return 0;
}