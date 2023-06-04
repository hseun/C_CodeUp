#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	float a, b, c, d;
	scanf("%f %f %f %f", &a, &b, &c, &d);
	if ((a / b) > (c / d))
	{
		printf(">");
	}
	else if ((a / b) < (c / d))
	{
		printf("<");
	}
	else if ((a / b) == (c / d))
	{
		printf("=");
	}
	return 0;
}