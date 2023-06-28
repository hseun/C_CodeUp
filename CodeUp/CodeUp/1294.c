#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	char code[10000];
	gets(code);
	for (int i = 0; code[i] != '\0'; i++) {
		if (code[i] == ' ') {
			continue;
		}
		code[i] += 3;
		if (code[i] > 'z')
			code[i] -= 26;
	}
	printf("%s", code);
	return 0;
}