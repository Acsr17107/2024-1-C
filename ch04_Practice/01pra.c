#define _CRT_SECURE_NO_WARNINGS
#define PI 3.141592

#include <stdio.h>

int main(void)
{
	float r = 0;

	printf("�� ������ �Է�: ");
	scanf("%f", &r);

	printf("�� ������: %f\n", r);
	printf("�� ����: %f\n", r * r * PI);
	printf("�� �ѷ�: %f\n", 2 * r * PI);

	return 0;
}