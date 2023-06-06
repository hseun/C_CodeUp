#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	char a, b = 'a';
	scanf("%c", &a);
	do
	{
		printf("%c ", b);
		t++;
	} while (b <= a);
	return 0;
}