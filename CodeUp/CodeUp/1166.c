#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int a;
	scanf("%d", &a);
	if (a % 400 == 0)
	{
		printf("Leap");
	}
	else if (a % 4 == 0 && a % 100 != 0)
	{
		printf("Leap");
	}
	else
	{
		printf("Normal");
	}
	return 0;
}