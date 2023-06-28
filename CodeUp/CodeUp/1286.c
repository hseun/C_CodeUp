#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include <limits.h>

int main(void)
{
	int a, max = INT_MIN, min = INT_MAX;
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &a);
		if (a > max) {
			max = a;
		}
		if (a < min) {
			min = a;
		}
	}
	printf("%d\n%d", max, min);
	return 0;
}