#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	char a, b;
	scanf("%c %c", &a, &b);
	printf("%c %c", b, a);
	return 0;
}