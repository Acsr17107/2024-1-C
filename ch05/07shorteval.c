#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int amount = 0;
	int coupons = 10; //���� 10 �̻�� 10 �̸��� �Է�

	printf("�� �ݾ� >> ");
	scanf("%d", &amount); //���� 10000�� �̻�� �̸��� �Է�

	int sale = (amount >= 10000) && (coupons++ >= 10);
	printf("����: %d, ���� ��: %d\n", sale, coupons);

	return 0;
}