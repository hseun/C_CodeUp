#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int n, count = 0, num1, num2;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0) {
			count++;
		}
		if (count == 2) {
			num1 = i;
			num2 = n / i;
			for (int j = 1; j <= num2; j++)
			{
				if (num2 % j == 0) {
					count++;
				}
			}
			if (count == 4) {
				printf("%d %d", num1, num2);
				break;
			}
		}
	}
	if (count > 4 || count < 4) {
		printf("wrong number");
	}
	return 0;
}