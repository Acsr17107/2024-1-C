#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int g;
	double h, w, sw, o;

	printf("������ ���� �Է��ϼ���. 1(����), 2(����): ");
	scanf("%d", &g);
	printf("����(cm)�� ������(kg)�� �Է��ϼ���: ");
	scanf("%lf %lf", &h, &w);

	switch (g) {
	case 1:
		sw = h / 100 * h / 100 * 22;
		printf("���� ����: %.2f, ü��: %.2f, ǥ�� ü��: %.2f\n", h, w, sw);
		break;
	case 2:
		sw = h / 100 * h / 100 * 21;
		printf("���� ����: %.2f, ü��: %.2f, ǥ�� ü��: %.2f\n", h, w, sw);
		break;
	}

	o = (w / sw) * 100;

	if (o / 10 < -10)
		printf("������: %.2f, ����: ��ü��\n", o);
	else if (o / 10 >= -10 && o / 10 < 10)
		printf("������: %.2f, ����: ����\n", o);
	else if (o / 10 >= 10 && o / 10 <= 20)
		printf("������: %.2f, ����: ü�� ����\n", o);
	else if (o / 10 > 20)
		printf("������: %.2f, ����: ��\n", o);

	return 0;
}