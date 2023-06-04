#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a < b + c && b < a + c && c < a + b) {
		if (a == b && b == c) {
			printf("Á¤»ï°¢Çü");
		}
		else if (a == b || a == c || b == c) {
			printf("ÀÌµîº¯»ï°¢Çü");
		}
		else if (a * a + b * b == c * c) {
			printf("Á÷°¢»ï°¢Çü");
		}
		else {
			printf("»ï°¢Çü");
		}
	}
	else {
		printf("»ï°¢Çü¾Æ´Ô");
	}
	return 0;
}