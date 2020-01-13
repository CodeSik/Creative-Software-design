/*#include <stdio.h>

int main() {
	int tmp;

	int arr[18] = { 0, 1, 5, 4, 2, 5, 7, 8, 3, 4, 5, 1, 1, 2, 3, 6, 7, 8 };
	printf("initial values: ");
	for (int i = 0; i < 18; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	for (int j = 0; j < 18; j++) {

		for (int i = 0; i < 17; i++) {
			if (arr[i] > arr[i + 1]) {
				tmp = arr[i + 1];
				arr[i + 1] = arr[i];
				arr[i] = tmp;
			}
			
		}
		printf("process %d:\t",j);
		for (int k = 0; k < 18; k++) {
			printf("%d ", arr[k]);
		}
		printf("\n");
	}
	printf("sort values :\t");
	for (int i = 0; i < 18; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("Deduplication:\t");

	for (int i = 0; i < 18; i++) {
		int output;
		if (arr[i] != arr[i + 1]) {
			output = arr[i];
			printf("%d ", arr[i]);
		}
		else
			continue;
	}
}*/