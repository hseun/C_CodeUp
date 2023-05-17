#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int second, minute;
	scanf("%d", &second);
	printf("%d %d", second / 60, second % 60);
	return 0;
}