#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	char d[30];
	int i;
	scanf("%s", d);
	for (i = 0; d[i] != '\0'; i++)
	{
		printf("\'%c\'", d[i]);
		printf("\n");
	}
	return 0;
}