#include <stdio.h>

void main() {
	float arr[10] = { 0.10, 2.00, 3.40, 5.20, 4.50, 7.80, 9.70, 1.40, 6.60, 7.20 };
	float* pf = &arr[0];
	int i;

	for (i = 0; i < 10; i++)
		printf("%.2f ", *(pf + i));
}