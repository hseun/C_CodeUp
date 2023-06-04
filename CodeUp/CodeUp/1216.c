#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a < (b - c)) {
		printf("advertise");
	}
	else if (a > (b - c)) {
		printf("do not advertise");
	}
	else {
		printf("does not matter");
	}
	return 0;
}