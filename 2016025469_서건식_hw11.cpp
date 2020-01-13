#include <stdio.h>
#include <ctype.h>

int main() {
	int input;

	while (1) {
		printf("Input Alphabet: ");
		input = getchar();
		getchar();

		if (isupper(input)) {
			printf("Result :");
			input = input + 32;
			putchar(tolower(input));
			printf("\n");
		}
		else if (islower(input)) {
			printf("Result :");
			input = input - 32;
			putchar(toupper(input));
			printf("\n");
		}
		else {
			printf("Wrong input! try again.\n");
		}

	}
}