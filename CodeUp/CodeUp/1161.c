#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	if (a % 2 == 0) {
		printf("Â¦¼ö+");
	}
	if (a % 2 != 0) {
		printf("È¦¼ö+");
	}
	if (b % 2 == 0) {
		printf("Â¦¼ö=");
	}
	if (b % 2 != 0) {
		printf("È¦¼ö=");
	}
	if (a % 2 == b % 2) {
		printf("Â¦¼ö");
	}
	if (a % 2 != b % 2) {
		printf("È¦¼ö");
	}
	return 0;
}