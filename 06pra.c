#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int amount, tax;

	printf("�ҵ� �Է� >> ");
	scanf("%d", &amount);

	if (amount <= 12000000)
		tax = 6;
	else if (amount > 12000000 && amount <= 46000000)
		tax = 15;
	else if (amount > 46000000 && amount <= 88000000)
		tax = 24;
	else if (amount > 88000000 && amount <= 150000000)
		tax = 35;
	else if (amount > 150000000 && amount <= 300000000)
		tax = 38;
	else if (amount > 300000000 && amount <= 500000000)
		tax = 40;
	else if (amount > 500000000)
		tax = 42;

	printf("���� ���ռҵ�: %d, ����: %d%%\n", amount, tax);

	return 0;
}