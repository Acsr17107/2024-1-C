#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a, b;
	printf("�� ������ �Է��Ͻÿ�.\n");
	scanf("%d %d", &a, &b);
	printf("��  : %d + %d = %d\n", a, b, a + b);
	printf("���: %d /  2 = %f\n", a + b, (a + b) / 2.0);

	return 0;
}