#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	double height, weight, standard, result;
	scanf("%lf %lf", &height, &weight);
	standard = (height - 100) * 0.9;
	result = ((weight - standard) * 100) / standard;
	if (result <= 10) {
		printf("����");
	}
	else if (result <= 20) {
		printf("��ü��");
	}
	else {
		printf("��");
	}
	return 0;
}