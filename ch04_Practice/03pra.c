#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	float const m = 3.305785;
	float a;

	printf("��� �Է�: ");
	scanf("%f", &a);
	printf("�Էµ� ���: %f\n", a);
	printf("��������: %f", a * m);

	return 0;
}