/* �ҽ�: 04integer.c */

#include <stdio.h>

int main(void)
{
	short sVar = 32000;         //-32767���� 32767����
	int   iVar = -2140000000;   //�� 21�� �������� ���� ����

	printf("���� ��: %d %d\n", sVar, iVar);

	//C99 ���� �߰��� �ڷ���: 64��Ʈ�� ������ ����
	long long dist1 = 2720000000000; //������ õ�ռ� ���� �Ÿ�(km) 27�� 2õ
	__int64 dist2 = 4500000000000;   //�¾�� �ؿռ� ���� �Ÿ�(km) 45��

	printf("������ õ�ռ� ���� �Ÿ�(km): %lld\n", dist1);
	printf("�¾�� �ؿռ� ���� �Ÿ�(km): %lld\n", dist2);

	return 0;
}