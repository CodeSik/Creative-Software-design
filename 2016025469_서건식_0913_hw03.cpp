#include <stdio.h>

int main() {
	int dan1=2, dan2=1;

	while (dan1 <= 9) {
		
		while (dan2 <= 9) {
			printf("%d * %d = %d\n", dan1, dan2, dan1*dan2);
			dan2++;
		}
		dan2 = 1;
		dan1++;
	}
}