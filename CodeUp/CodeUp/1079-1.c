#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	char a;
	while (1)
	{
		scanf("%c ", &a);
		if (a == 'q')
		{
			printf("q");
			break;
		}
		printf("%c\n", a);
	}
	return 0;
}