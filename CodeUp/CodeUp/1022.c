#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	char data[2001];
	fgets(data, 2000, stdin);
	printf("%s", data);
	return 0;
}