#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	int i,array[10];
	int max=0, min=1001;

	for (i = 0; i < 10; i++) {
		int random = rand() % 1000 + 1;
		printf("%d ", random);
		array[i] = random;
		if (max < array[i]) {
			max = array[i];
		}
		if (min > array[i]) {
			min = array[i];
		}
	}
	
	printf("\nMaximum number is %d\n", max);
	printf("Minimum number is %d", min);

}

