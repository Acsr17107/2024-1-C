#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	float cm;

	printf("���̸� ��Ƽ���ͷ� �Է� (�Ҽ�) >> ");
	scanf("%f", &cm);

	float feet = cm / 30.48;

	printf("%f ��Ƽ����: %.3f ��Ʈ\n", cm, feet);

	return 0;
}