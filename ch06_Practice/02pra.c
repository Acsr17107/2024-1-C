#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double a, b;

	printf("��ǥ x, y �Է� >> ");
	scanf("%lf %lf", &a, &b);

	if (a > 0 && b > 0)
	{
		printf("��ǥ (%.2f, %.2f): 1��и�\n", a, b);
	}
	else if (a < 0 && b > 0)
	{
		printf("��ǥ (%.2f, %.2f): 2��и�\n", a, b);
	}
	else if (a < 0 && b < 0)
	{
		printf("��ǥ (%.2f, %.2f): 3��и�\n", a, b);
	}
	else if (a > 0 && b < 0)
	{
		printf("��ǥ (%.2f, %.2f): 4��и�\n", a, b);
	}

	return 0;
}