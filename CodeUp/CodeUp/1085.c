#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	double h, b, c, s, result;
	scanf("%lf %lf %lf %lf", &h, &b, &c, &s);
	result = (h * b * c * s) / (8 * 1024 * 1024);
	printf("%.1lf MB", result);
	return 0;
}