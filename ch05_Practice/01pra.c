#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a, b;

	printf("������ ���� �Է�1 : ");
	scanf("%d", &a);
	printf("������ ���� �Է�2 : ");
	scanf("%d", &b);

	int c = a > b ? a / b : b / a;
	int d = a > b ? a % b : b % a;

	printf("���� %d �̰� �������� %d �Դϴ�.\n", c, d);

	return 0;
}