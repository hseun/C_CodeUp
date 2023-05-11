#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d", (a > b ? b : a) > c ? c : (a > b ? b : a));
	return 0;
}