#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	double a;
	scanf("%lf", &a);
	printf("%.11lf", a);
	return 0;
}