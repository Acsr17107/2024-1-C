#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	float f;

	printf("ȭ�� �µ� �Է�: ");
	scanf("%f", &f);
	printf("�Էµ� ȭ�� �µ�: %f\n", f);

	float c = 5.0 / 9.0 * (f - 32.0);

	printf("���� �µ�: %.4f\n", c);

	return 0;
}