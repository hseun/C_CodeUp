#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	if (a % 2 == 0) {
		printf("礎熱+");
	}
	if (a % 2 != 0) {
		printf("�汝�+");
	}
	if (b % 2 == 0) {
		printf("礎熱=");
	}
	if (b % 2 != 0) {
		printf("�汝�=");
	}
	if (a % 2 == b % 2) {
		printf("礎熱");
	}
	if (a % 2 != b % 2) {
		printf("�汝�");
	}
	return 0;
}