#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float get_area_of_square(float length)
{
	return length * length;
}

int main(void)
{
	float length;
	printf("한 변의 길이? ");
	scanf("%f", &length);

	printf("정사각형의 면적: %f", get_area_of_square(length));
}