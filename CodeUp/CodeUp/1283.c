#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int a, b, c;
	scanf("%d %d", &a, &b);
	double sum = a;
	for (int i = 1; i <= b; i++)
	{
		scanf("%d", &c);
		sum = sum * (100 + c) / 100;
	}
	printf("%.0lf\n", sum - a);
	if (sum - a >= 0.5) {
		printf("good");
	}
	else if (sum - a < -0.5) {
		printf("bad");
	}
	else {
		printf("same");
	}
	return 0;
}