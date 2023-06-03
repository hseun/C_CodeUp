#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	double a, b, result;
	scanf("%lf %lf", &a, &b);
	result = a + b;
	if (result < a + b)
		result = a + b;
	if (result < a * b)
		result = a * b;
	if (result < a - b)
		result = a - b;
	if (result < a / b)
		result = a / b;
	if (result < b - a)
		result = b - a;
	if (result < b / a)
		result = b / a;
	if (result < pow(a, b))
		result = pow(a, b);
	if (result < pow(b, a))
		result = pow(b, a);
	printf("%.6lf", result);
	return 0;
}