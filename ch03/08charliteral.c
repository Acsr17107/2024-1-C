/* �ҽ�: 08charliteral.c */

#include <stdio.h>

int main(void)
{
	printf("%Cava", 'J');

	char sq = '\'';                 //��������ǥ
	printf("%c\7\n", '\a');         //�˶� ���ڸ� 2�� ����ϰ� ���� ��
	printf("%c�ڹ� ���'\n", sq);   //���ڿ� ���ο����� '(��������ǥ) �״�� ��� ����

	//���ڿ� ���ο����� "(ū����ǥ) �ݵ�� \"�� ���
	printf("\"C���\" ���� ����ִ�!\n");

	return 0;
}