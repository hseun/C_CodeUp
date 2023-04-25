#include <stdio.h>
#include <limits.h>

int main(void)
{
	int a = INT_MIN;
	int b = INT_MAX;
	printf("%d %d", a, b);
	printf("%d %d", 0x80000000, 0x7fffffff);
	return 0;
}