#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int a, count = 0;
	scanf("%d", &a);
	for (int i = 1; i <= a; i++)
	{
		if (a % i == 0) {
			count++;
		}
	}
	if (count == 2) {
		printf("prime");
	}
	else {
		printf("not prime");
	}
	return 0;
}