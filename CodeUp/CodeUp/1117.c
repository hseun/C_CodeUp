#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	float a, b;
	scanf("%f %f", &a, &b);
	printf("%.2f", a * b);
	return 0;
}