#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_perimeter(int width, int length) {
    int circumference;
    circumference = width * 2;
    circumference += length * 2;
    return circumference;
}

int main(void) {
    int width, length;

    printf("가로? ");
    scanf("%d", &width);

    printf("세로? ");
    scanf("%d", &length);

    printf("직사각형의 둘레: %d\n", get_perimeter(width, length));
}
