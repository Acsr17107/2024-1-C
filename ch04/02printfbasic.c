#include <stdio.h>

int main(void)
{
	double width = 3.424, height = 2.718;
	int shape = 3;   //�ﰢ�� �Ǵ� �簢��

	printf("����: %f, ����: %lf\n", width, height);
	printf("%d���� %s: %8.2f\n", shape, "����", (width * height) / 2);
	printf("%d���� %s: %10.4f\n", shape + 1, "����", width * height);

	return 0;
}