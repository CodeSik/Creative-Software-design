#include <stdio.h>
#include <stdlib.h>

void matrix_sum(int matrix1[5][5], int matrix2[5][5], int mat_result[5][5]);
void matrix_sub(int matrix1[5][5], int matrix2[5][5], int mat_result[5][5]);
void matrix_mul(int matrix1[5][5], int matrix2[5][5], int mat_result[5][5]);
void main() {
	int matrix1[5][5];
	int matrix2[5][5];
	int select_num;


	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			matrix1[i][j] = (rand() % 5) + 1;
			matrix2[i][j] = (rand() % 5) + 1;
		}
	}
	printf("MATRIX_1:\n");
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d\t", matrix1[i][j]);
		}
		printf("\n");
	}
	printf("MATRIX_2:\n");
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d\t", matrix2[i][j]);
		}
		printf("\n");
	}

	while (1) {
		printf("*********************\nSelect the operation\n1. Addition\n2. Suntraction\n3. Multiplication\n4. EXIT\n*********************\n:");
		scanf("%d", &select_num);
		int matrix3[5][5];
		if (select_num == 1) {
			matrix_sum(matrix1, matrix2, matrix3);
		}
		else if (select_num == 2) {
			matrix_sub(matrix1, matrix2, matrix3);
		}
		else if (select_num == 3) {
			matrix_mul(matrix1, matrix2, matrix3);
		}
		else if (select_num == 4) {
			break;
		}
		else {
			printf("Please input the number between 1 and 4\n");
		}


	}
}

	void matrix_sum(int matrix1[5][5], int matrix2[5][5], int mat_result[5][5]) {
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				mat_result[i][j] = matrix1[i][j] + matrix2[i][j];
			}
		}
		printf("Result: \n");
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				printf("%d\t", mat_result[i][j]);
			}
			printf("\n");
		}
	}
	void matrix_sub(int matrix1[5][5], int matrix2[5][5], int mat_result[5][5]){
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				mat_result[i][j] = matrix1[i][j] - matrix2[i][j];
			}
		}
		printf("Result: \n");
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				printf("%d\t", mat_result[i][j]);
			}
			printf("\n");
		}
}
	void matrix_mul(int matrix1[5][5], int matrix2[5][5], int mat_result[5][5]) {
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				mat_result[i][j] = 0;
				for (int k = 0; k < 5; k++)
				{
					mat_result[i][j] += matrix1[i][k] * matrix2[k][j];
				}
			}
		}
		printf("Result: \n");
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				printf("%d\t", mat_result[i][j]);
			}
			printf("\n");
		}
		mat_result[5][5] = {};
	}