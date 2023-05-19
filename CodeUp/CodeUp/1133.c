#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	char a[31];
	fgets(a, 31, stdin);
	printf("%s", a);
	return 0;
}