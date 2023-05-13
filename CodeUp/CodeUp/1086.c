#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	double r, g, b, result;
	scanf("%lf %lf %lf", &r, &g, &b);
	result = (r * g * b) / (8 * 1024 * 1024);
	printf("%.2f MB", result);
	return 0;
}