#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	float height, weight;

	printf("Ű �Է�: ");
	scanf("%f", &height);
	printf("������ �Է�: ");
	scanf("%f", &weight);
	printf("����� %s �Դϴ�.\n", (weight <= (height - 100) * 0.9) ? "����" : "��");

	return 0;
}