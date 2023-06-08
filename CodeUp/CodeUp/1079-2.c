#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	char a;
	while (a != 'q')
	{
		scanf("%c ", &a);
		printf("%c\n", a);
	}
	return 0;
}