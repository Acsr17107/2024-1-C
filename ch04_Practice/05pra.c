#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	float a, b;

	printf("�� �Ǽ� �Է�: ");
	scanf("%f %f", &a, &b);
	printf("����: %f ����: %f\n", a, b);
	printf("�簢�� ����: %12.3f\n", a * b);
	printf("�ﰢ�� ����: %-12.3f\n", a * b / 2);

	return 0;
}