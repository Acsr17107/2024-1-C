#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	float a, b;
	printf("�� �Ǽ��� �Է��Ͻÿ�.\n");
	scanf("%f %f", &a, &b);
	printf("��  : %f + %f = %f\n", a, b, a + b);
	printf("���: %f /  2 = %f\n", a + b, (a + b) / 2);

	return 0;
}