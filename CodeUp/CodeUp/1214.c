#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int year, month;
	scanf("%d %d", &year, &month);
	if (month == 2) {
		if ((year % 400 == 0)) {
			printf("29");
		}
		else if ((year % 4 == 0) && (year % 100 != 0)) {
			printf("29");
		}
		else {
			printf("28");
		}
	}
	else if (month < 8) {
		if (month % 2 != 0) {
			printf("31");
		}
		else {
			printf("30");
		}
	}
	else {
		if (month % 2 == 0) {
			printf("31");
		}
		else {
			printf("30");
		}
	}
	return 0;
}