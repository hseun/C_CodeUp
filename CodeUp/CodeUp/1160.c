#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int a;
	scanf("%d", &a);
	if (a == 1 || a == 3 || a == 5 || a == 7) {
		printf("oh my god");
	}
	else {
		printf("enjoy");
	}
	return 0;
}