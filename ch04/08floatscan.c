#define _CRT_SECURE_NO_WARNINGS //scanf() ������ �����ϱ� ���� ��� ����

#include <stdio.h>

int main(void)
{
	float mile = 0;
	printf("100 ų�ι���(km)�� �� ����(mile)? "); //0.621
	scanf("%f", &mile);
	printf("80 ų�ι���: %.2f ����\n\n", mile * 80);

	double liter = 0;
	printf("1 ����(gallon)�� �� ����(liter)? "); //3.785
	scanf("%lf", &liter);
	printf("18 ����: %.2f ����\n", liter * 18);

	return 0;
}