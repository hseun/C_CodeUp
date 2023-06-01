#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int time, score;
	scanf("%d %d", &time, &score);
	for (; time < 90; score++) {
		time += 5;
	}
	printf("%d", score);
	return 0;
}