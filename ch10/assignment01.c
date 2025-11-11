#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct login {
	char id[21];
	char pw[21];
};

void pa10_01() {
	struct login data;
	int i;
	printf("ID? ");
	scanf("%s", &data.id);
	printf("Password? ");
	scanf("%s", &data.pw);

	printf("ID : %s\n", data.id);
	printf("PW : ");
	for (i = 0; i < 20; i++) {
		if (data.pw[i] == '\0')
			break;
		printf("*");
	}
}