#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int year, month, day;
	scanf("%d %d %d", &year, &month, &day);
	if ((year - month + day) % 10 == 0) {
		printf("���");
	}
	else {
		printf("�׷�����");
	}
	return 0;
}