#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int h, m;
	scanf("%d %d", &h, &m);
	m -= 30;
	if (m < 0)
	{
		h--;
		m += 60;
	}
	if (h < 0)
	{
		h += 24;
	}
	printf("%d %d", h, m);
	return 0;
}