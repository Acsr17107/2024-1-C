#define _CRT_SECURE_NO_WARNINGS //scanf() ������ �����ϱ� ���� ��� ����

#include <stdio.h>

int main(void)
{
	int x = 0, y = 0;

	printf("�� ������ �Է� >> ", &x, &y);
	scanf("%d%d", &x, &y);

	printf("%d\n", x += y);
	printf("%d %d\n", x, y);
	printf("%d\n", x -= y);
	printf("%d %d\n", x, y);

	return 0;
}