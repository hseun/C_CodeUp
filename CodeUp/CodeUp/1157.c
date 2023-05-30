#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	float a;
	scanf("%f", &a);
	if (a >= 50 && a <= 60)
	{
		printf("win");
	}
	else
	{
		printf("lose");
	}
	return 0;
}