#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int a, i = 0;
	scanf("%d", &a);
	for (int result = 0; result < a;)
	{
		i++;
		result += i;
	}
	printf("%d", i);
	return 0;
}