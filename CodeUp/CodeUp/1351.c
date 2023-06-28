#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	for (int i = a; i <= b; i++) {
		for (int j = 1; j <= 9; j++) {
			printf("%d*%d=%d\n", i, j, i * j);
		}
	}
	return 0;
}