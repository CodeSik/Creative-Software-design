#include <stdio.h>
#include <stdlib.h>


int main() {
	int n, max, min;
	printf("Input array index: ");
	scanf("%d", &n);
	int arr[1000];
	printf("Input %d numbers : ",n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	max = arr[0]; min = arr[0];
	for (int i = 0; i < n; i++) {
		if (max<arr[i]) {
			max = arr[i];
		}
		if (min > arr[i])
			min = arr[i];
	}

	printf("maximum : %d\nminimum : %d", max, min);


}