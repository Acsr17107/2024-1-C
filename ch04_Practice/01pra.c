#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	float p = 3.141592;
	float r = 0;

	printf("�� ������ �Է�: ");
	scanf("%f", &r);
	printf("�� ������: %f\n", r);
	printf("�� ����: %f\n", r * r * p);
	printf("�� �ѷ�: %f\n", 2 * r * p);

	return 0;
}