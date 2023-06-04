#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int num1, num2, num3, num4, num5, num6, bounus;
	scanf("%d %d %d %d %d %d %d", &num1, &num2, &num3, &num4, &num5, &num6, &bounus);
	int a1, a2, a3, a4, a5, a6;
	scanf("%d %d %d %d %d %d", &a1, &a2, &a3, &a4, &a5, &a6);
	int count = 0;
	if (num1 == a1 || num1 == a2 || num1 == a3 || num1 == a4 || num1 == a5 || num1 == a6) {
		count++;
	}
	if (num2 == a1 || num2 == a2 || num2 == a3 || num2 == a4 || num2 == a5 || num2 == a6) {
		count++;
	}
	if (num3 == a1 || num3 == a2 || num3 == a3 || num3 == a4 || num3 == a5 || num3 == a6) {
		count++;
	}
	if (num4 == a1 || num4 == a2 || num4 == a3 || num4 == a4 || num4 == a5 || num4 == a6) {
		count++;
	}
	if (num5 == a1 || num5 == a2 || num5 == a3 || num5 == a4 || num5 == a5 || num5 == a6) {
		count++;
	}
	if (num6 == a1 || num6 == a2 || num6 == a3 || num6 == a4 || num6 == a5 || num6 == a6) {
		count++;
	}
	if (count >= 6) {
		printf("1");
	}
	else if (count >= 5 && (bounus == a1 || bounus == a2 || bounus == a3 || bounus == a4 || bounus == a5 || bounus == a6)) {
		printf("2");
	}
	else if (count >= 5) {
		printf("3");
	}
	else if (count >= 4) {
		printf("4");
	}
	else if (count >= 3) {
		printf("5");
	}
	else {
		printf("0");
	}
	return 0;
}