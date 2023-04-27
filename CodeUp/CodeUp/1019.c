#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int year, month, day;
	scanf("%d.%d.%d", &year, &month, &day);
	printf("%04d.%02d.%02d", year, month, day);
	return 0;
}