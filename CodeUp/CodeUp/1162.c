#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int year, month, day;
	scanf("%d %d %d", &year, &month, &day);
	if ((year - month + day) % 10 == 0) {
		printf("대박");
	}
	else {
		printf("그럭저럭");
	}
	return 0;
}