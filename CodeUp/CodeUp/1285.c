#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int n;
	char a;
	scanf("%d%c", &n, &a);
	int result = n;
	for (; a != '=';)
	{
		scanf("%d", &n);
		if (a == '+') {
			result += n;
		}
		if (a == '-') {
			result -= n;
		}
		if (a == '*') {
			result *= n;
		}
		if (a == '/') {
			result /= n;
		}
		scanf("%c", &a);
	}
	printf("%d", result);
	return 0;
}