#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int dates;

	printf("���� �Է� >> ");
	scanf("%d", &dates);
	printf("�Է��� ��¥: %d\n", dates);
	printf("%d�� %d�� %d��", (dates / 365), (dates % 365) / 30, (dates % 365) % 30);

	return 0;
}