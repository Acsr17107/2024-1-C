#include <stdio.h>
#define EXCHANGE_RATE 1120.0

int main(void)
{
	int won = 1000000;
	printf("%d �� => %f �޷�\n", won, won / EXCHANGE_RATE);

	return 0;
}