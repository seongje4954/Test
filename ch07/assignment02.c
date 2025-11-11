#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float geometric(float term, float allowance) {
	return term * allowance;
}

int main(void) {
	int i;
	float term, allowance;
	float arr[10];
	printf("첫 번째 항? ");
	scanf(" %f", &term);

	printf("공비? ");
	scanf(" %f", &allowance);

	printf("등비수열:");
	arr[0] = term;
	printf(" %.01f", arr[0]);
	for (i = 1; i < 10; i++) {
		arr[i] = geometric(arr[i - 1], allowance);
		printf(" %.0f", arr[i]);
	}
}