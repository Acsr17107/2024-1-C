#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main(void)
{
	int year;

	printf("��ġ �Ⱓ �Է�(��) >> ");
	scanf("%d", &year);

	float total_money = 1000000 * pow(1 + 4.5 / 100, year);

	printf("����: 4.5%% �ѱݾ�: %.2f\n", total_money);

	return 0;
}