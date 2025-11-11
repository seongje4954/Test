#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct date {
    int year;
    int month;
    int day;
} DATE;

int main() {
	DATE date;

    printf("¿¬? ");
    scanf("%d", &date.year);
    printf("¿ù? ");
    scanf("%d", &date.month);
    printf("ÀÏ? ");
    scanf("%d", &date.day);

    printf("%d/%d/%d", date.year, date.month, date.day);

    return 0;
}
