#include <stdio.h>

int main() {
	int i, input;
	int p_f[10];
	int pass=0, fail=0;

	for (i = 0; i < 10; i++) {
		printf("Enter result (1=pass,2=fail) :");
		scanf("%d", &input);
		p_f[i] = input;
	}

	for (i = 0; i < 10; i++) {
		if (p_f[i] == 1) {
			pass++;
		}
		else {
			fail++;
		}
	}

	printf("Passed = %d \nFailed = %d", pass, fail);
	return 0;

}