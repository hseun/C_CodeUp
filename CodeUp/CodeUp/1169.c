#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int age, year;
	scanf("%d", &age);
	year = 2012 - age + 1;
	if (year < 2000)
	{
		printf("%d 1", (year % 100));
	}
	else if (year >= 2000)
	{
		year %= 100;
		if (year < 10)
		{
			year %= 10;
		}
		printf("%d 3", year);
	}
	return 0;
}