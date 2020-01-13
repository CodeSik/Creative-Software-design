#include <stdio.h>
#include <stdlib.h>
int main() {
	int input=0, *num,i = 0;;
	num = (int *)malloc((i+1)*sizeof(int));

	while (input != -1) {
		printf("Number ? ");
		scanf("%d", &input);
		num[i] = input;
		num = (int*)realloc(num,(i+2)*sizeof(int));
		i++;
	}
	for (int j = 0; j < i-1; j++) {
		printf("%d,", num[j]);
	}
	free(num);


}