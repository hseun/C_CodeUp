#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int h, m, s;
	scanf("%d:%d:%d", &h, &m, &s);
	printf("%d", m);
	return 0;
}