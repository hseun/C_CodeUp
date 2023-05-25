#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	char grade;
	scanf("%c", &grade);
	switch (grade)
	{
	case 'A':
		printf("best!!!");
		break;
	case 'B':
		printf("good!!");
		break;
	case 'C':
		printf("run!");
		break;
	case 'D':
		printf("slowly~");
		break;
	default:
		printf("what?");
	}
	return 0;
}