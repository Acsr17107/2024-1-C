#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int month, quarter = 0;

	printf("�⵵�� ��(month)�� �Է��ϼ���. >> ");
	scanf("%d", &month);

	if (month >= 1 && month <= 3)
		quarter = 1;
	else if (month >= 4 && month <= 6)
		quarter = 2;
	else if (month >= 7 && month <= 9)
		quarter = 3;
	else if (month >= 10 && month <= 12)
		quarter = 4;

	printf("%d��(month)�� %d�б��Դϴ�.\n", month, quarter);

	return 0;
}