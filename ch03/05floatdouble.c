/* �ҽ�: 05floatdouble.c */

#include <stdio.h>

int main(void)
{
	float         x = 3.14F;      //float x = 3.14;�� ���, ��� �߻�
	double        y = -3.141592;  //double ������� ũ��� float�� 2��
	long double   z = 29.74;      //doublee�� long double�� ��������� ��� 64��Ʈ

	printf("�ε��Ҽ� ��: %f %f %f\n", x, y, z); //��� %f�� ��� ����

	return 0;
}