/* �ҽ�: 06char.c */

#include <stdio.h>

int main(void)
{
	char c1 = 'a';      //�ҹ��� a
	char c2 = 65;       //�빮�� A�� �ڵ� �� 65
	char c3 = '\127';   //�빮�� W�� 8���� �ڵ� �� 127
	char c4 = '\x57';   //�빮�� W�� 16���� �ڵ� �� 57

	printf("���� ��(����): %c %c %c %c\n", c1, c2, c3, c4);
	printf("�ڵ� ��(��ȣ): %d %d %d %d\n", c1, c2, c3, c4);

	return 0;
}