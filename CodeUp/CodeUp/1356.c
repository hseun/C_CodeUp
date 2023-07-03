#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j == 0 || i == 0 || j == n - 1 || i == n - 1)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}