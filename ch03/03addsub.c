/**
 *  �ҽ�: 03addsub.c
 *  ����: V 1.0
 **/

#include <stdio.h>

int main(void)
{
	int data1 = 20, data2 = 13;

	//���� �������� ���ʰ� �����ʿ����� ������ �ǹ� �ؼ�
	int diff = data1 - data2;
	int sum = data1 + data2;

	printf("data1: %d, data2: %d\n", data1, data2);
	printf("��: %d, ��: %d\n", diff, sum);

	return 0;
}