/* �ҽ�: 09numliteral.c */

#include <stdio.h>

int main(void)
{
	printf("%d, %d\n", 010, 015);     //8����
	printf("%d, %d\n", 10, 15);       //10����
	printf("%d, %d\n", 0X1a, 0x15);   //16����

	printf("%f, ", 2.71828);
	printf("%f, ", 2.71828E+2);
	printf("%f\n", 2.71828e-2);

	return 0;
}