#define _CRT_SECURE_NO_WARNINGS //scanf() ������ �����ϱ� ���� ��� ����

#include <stdio.h>

int main(void)
{
	char abc, plus;

	printf("C ���α׷��� ����� ���ϴ� ����(A+, A0ó��)�� �Է� >> ");
	//���� �� ���� ���̾ �Է� ����
	abc = getchar();
	scanf("%c", &plus);

	printf("���� %c%c\n", abc, plus);

	return 0;
}