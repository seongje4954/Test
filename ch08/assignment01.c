#include <stdio.h>

void main() {
	double x[3];
	double* q = x;

	int i;
	for (i = 0; i < 3; i++)
		printf("x[%d]ÀÇ ÁÖ¼Ò: %X\n", i, q + i);
}