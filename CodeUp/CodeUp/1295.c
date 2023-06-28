#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	char a[1000];
	scanf("%s", &a);
	for (int i = 0; a[i] != '\0'; i++) {
		if (a[i] >= 'A' && a[i] <= 'Z') {
			a[i] += 32;
		}
		else if (a[i] >= 'a' && a[i] <= 'z') {
			a[i] -= 32;
		}
	}
	printf("%s", a);
	return 0;
}