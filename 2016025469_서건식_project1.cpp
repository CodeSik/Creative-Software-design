#include <stdio.h>
#include <stdlib.h>

int main() {
	int input;
	int i, j, k;
	printf("Please input the number: ");
	scanf("%d", &input);


	for (i = 0; i < input; i++) {
		for (j = 0; j < input; j++) {
			printf(" ");
		}

		for (k = 0; k < 2 * i + 1; k++) {
			printf("*");
		}

		printf("\n");
	}

	for (i = 0; i < input - 1; i++) {
		for (j = 0; j <= i ; j++) {
			printf(" ");
		}
		for (k = 0; k < 2 * (input - 2 - i) + 1; k++) {
			printf("*");
		}
		printf("\n");
	}
}