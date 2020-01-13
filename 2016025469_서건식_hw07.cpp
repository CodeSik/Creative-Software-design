#include <stdio.h>

int Input(void);
int Add(int i, int j);

int main(void) {
	int a,b;
	printf("Input two numbers: ");
	a = Input();
	b = Input();
	Add(a,b);

	return 0;
}

int Input(void) {
	int num1;
	scanf("%d", &num1);
	return num1;
}

int Add(int i, int j) {
	printf("Results: %d", i + j);
	return 0;
}