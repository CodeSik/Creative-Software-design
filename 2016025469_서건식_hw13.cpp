/*#include <stdio.h>

void add(float* a, int* b);
void sub(float* a, int* b);
void mul(float* a, int* b);
void div(float* a, int* b);
int a = 1;
float num2[100];
int main() {
	while (a==1) {
		int num;
		float sum = 0;
		int cnt_num;
		
		char op;
		printf("Count of number : ");
		scanf("%d", &cnt_num);
		if (cnt_num == 0) {
			a =0;
		}
		printf("Numbers: ");
		
		for (int i = 0; i < cnt_num; i++) {
			scanf("%d", &num);
			::num2[i] = num;
		}
		

		printf("Operator: ");
		getchar();
		scanf("%c", &op);
		

		if (op == '+') {

			add(&sum,&cnt_num);
			printf("---Results: %f\n", sum);
			sum = 0;
			
		}

		else if (op == '-') {
			sub(&sum, &cnt_num);
			printf("---Results: %f\n",sum);
			sum = 0;
		}
		else if (op == '*') {
			mul(&sum, &cnt_num);
			printf("---Results: %f\n", sum);
			sum =0;
		}
		else if (op == '/') {
			div(&sum, &cnt_num);
			printf("---Results: %f\n", sum);
			sum = 0;
		}
		else {
			printf("Please the right input");
		}
		
	}
}

void add(float* a, int* b) {
	int i;
	for (i = 0; i < *b; i++) {
		
		*a += ::num2[i];
	
	}
}

void sub(float* a, int *b) {
	int i;
	*a += ::num2[0];
	for (i = 1; i < *b; i++) {
		*a -= ::num2[i];
	}
}

void mul(float *a, int *b) {
	int i;
	*a += 1;
	for (i = 0; i < *b; i++) {
		*a *= ::num2[i];
	}
}

void div(float *a, int *b) {
	int i;
	*a += ::num2[0];
	for (i = 1; i < *b; i++) {
		*a /= ::num2[i];
	}
}*/