#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	char c;
	printf("���� �Է� : ");
	c = getchar();
	printf("%c\n", c);
	printf("%d %#o %#x\n", c, c, c);

	return 0;
}