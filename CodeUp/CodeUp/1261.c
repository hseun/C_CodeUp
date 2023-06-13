#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int a;
	for (int i = 1; i <= 10; i++)
	{
		scanf("%d", &a);
		if (a % 5 == 0) {
			printf("%d", a);
			break;
		}
		else if (i == 10) {
			printf("0");
		}
	}
	return 0;
}