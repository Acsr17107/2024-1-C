#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a, b, c;

	printf("�� ���� ���� �Է� >> ");
	scanf("%d %d %d", &a, &b, &c);

	int max = a > b && a > c ? a : (b > c ? b : c);

	printf("���� ū ��: %d\n", max);

	return 0;
}