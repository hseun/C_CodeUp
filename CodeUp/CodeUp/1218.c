#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a < b + c && b < a + c && c < a + b) {
		if (a == b && b == c) {
			printf("���ﰢ��");
		}
		else if (a == b || a == c || b == c) {
			printf("�̵�ﰢ��");
		}
		else if (a * a + b * b == c * c) {
			printf("�����ﰢ��");
		}
		else {
			printf("�ﰢ��");
		}
	}
	else {
		printf("�ﰢ���ƴ�");
	}
	return 0;
}