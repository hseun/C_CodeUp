#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int k, h, result = 0, odd = 0, even = 0;
	scanf("%d %d", &k, &h);
	for (int i = 1; i <= k; i++)
	{
		if (i % 2 == 0)
			even++;
		else
			odd++;
		if (i == k) {
			if (k % 2 == 0)
				result += even * 10;
			else
				result += odd;
		}
	}
	even = 0;
	odd = 0;
	for (int i = 1; i <= h; i++)
	{
		if (i % 2 == 0)
			even++;
		else
			odd++;
		if (i == h) {
			if (h % 2 == 0)
				result += even * 10;
			else
				result += odd;
		}
	}
	printf("%d", result);
	return 0;
}