#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int year, month, day, a;
	scanf("%d %d %d", &year, &month, &day);
	a = (year + month + day) % 1000;
	if ((a / 100) % 2 == 0) {
		printf("대박");
	}
	else {
		printf("그럭저럭");
	}
	return 0;
}