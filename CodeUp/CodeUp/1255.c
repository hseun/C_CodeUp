#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	double a, b;
	scanf("%lf %lf", &a, &b);
	for (; a <= b; a += 0.01)
	{
		printf("%.2lf ", a);
	}
	return 0;
}