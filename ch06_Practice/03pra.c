#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double a, b;

	printf("�� �Ǽ� �Է� >> ");
	scanf("%lf %lf", &a, &b);

	if (a > 0 && b > 0)
	{
		printf("�����: %f\n", a + b);
	}
	else if (a > 0 && b <= 0)
	{
		printf("�����: %f\n", a - b);
	}
	else if (a <= 0 && b > 0)
	{
		printf("�����: %f\n", b - a);
	}
	else if (a <= 0 && b <= 0)
	{
		printf("�����: %f\n", -a - b);
	}

	return 0;
}