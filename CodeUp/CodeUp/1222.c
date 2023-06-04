#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int time, score1, score2;
	scanf("%d %d %d", &time, &score1, &score2);
	for (; time < 90; score1++)
	{
		time += 5;
	}
	if (score1 > score2)
	{
		printf("win");
	}
	else if (score1 < score2)
	{
		printf("lose");
	}
	else
	{
		printf("same");
	}
	return 0;
}