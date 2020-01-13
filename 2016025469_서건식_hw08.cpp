#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int i;
	srand(time(NULL));
	

	printf("You can win the first prize at lotto!\n");
	for (i = 0; i < 6; i++) {
		int random = rand() % 45 + 1;
		printf("%d ", random);
	}
	printf("\n");
	return 0;
}
