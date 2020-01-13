#include <stdio.h>

int main() {
	while (1) {
		int i,j,h;
		printf("Height : ");
		scanf("%d", &h);
		if (h <= 0) {
			break;
		}

		for (i = 0; i <= h; i++) {
			for (j = 0; j < i; j++) {
				printf("*");
			}
			printf("\n");
		}
	}
}