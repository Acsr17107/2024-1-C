#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	char c;

	printf("�����Է�: ");
	scanf("%c", &c);
	printf("%c %#o %d %#x\n", c, c, c, c);

	return 0;
}