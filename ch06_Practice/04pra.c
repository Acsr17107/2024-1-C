#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double h, w;

	printf("����(cm)�� ������(kg)�� �Է��ϼ���: ");
	scanf("%lf %lf", &h, &w);

	h = h / 100;
	double bmi = w / (h * h);
	h = h * 100;

	if (bmi >= 40)
	{
		printf("����: %.2f, ������: %.2f. BMI����: %.2f �� ��\n", h, w, bmi);
	}
	else if (bmi >= 35 && bmi < 40)
	{
		printf("����: %.2f, ������: %.2f. BMI����: %.2f �ߵ ��\n", h, w, bmi);
	}
	else if (bmi >= 30 && bmi < 35)
	{
		printf("����: %.2f, ������: %.2f. BMI����: %.2f ��\n", h, w, bmi);
	}
	else if (bmi >= 25 && bmi < 30)
	{
		printf("����: %.2f, ������: %.2f. BMI����: %.2f ��ü��\n", h, w, bmi);
	}
	else if (bmi >= 18.5 && bmi < 25)
	{
		printf("����: %.2f, ������: %.2f. BMI����: %.2f ����\n", h, w, bmi);
	}
	else if (bmi < 18.5)
	{
		printf("����: %.2f, ������: %.2f. BMI����: %.2f ��ü��\n", h, w, bmi);
	}

	return 0;
}