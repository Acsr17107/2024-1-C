#define _CRT_SECURE_NO_WARNINGS //scanf() ������ �����ϱ� ���� ��� ����

#include <stdio.h>

int main(void)
{
	int year, month, day;
	printf("����� ��������� ? ");
	scanf("%d - %d - %d", &year, &month, &day);
	printf("�������: %d %d %d\n", year, month, day);

	return 0;
}