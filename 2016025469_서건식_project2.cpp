#include <stdio.h>

int Fibo(int n);

void main() {
	int a = 1;//while���� ����.
	int Input, number, i,Input_number=-1;
	int show_fibo[300];/*Input�� �޴� ����
		number�� �Ǻ���ġ ���� ����,Input_number�� �� ��������
		Input_number�� ������ ������, Initialize�ѵ� ���α׷��� ����Ǵ� ������ ���� ��������, ���� ���� ī���س���.
		show_fibo�� �Ǻ���ġ ��¿�. �迭 ũ���� ���� ����� ���� ���Ƿ� 300���� ���� */
	while (a == 1) {
		printf("**********************\n1. Calculate\n2. Show it!\n3. Initialize\n4. Quit\n**********************\n");
		printf("Input : ");//�޴� ����
		scanf_s("%d", &Input);
		if (Input == 1) {//1�϶�
			printf("Input the number : ");
			scanf_s("%d",&number);
			Input_number = number;//number�� ���� Input_number�� ����.
		}
		else if (Input == 2) {
			for (i = 0; i < Input_number; i++) {
				show_fibo[i] = Fibo(i);//ù ������ ����.
				printf("%d ", show_fibo[i]);//0���� �������.
			}
			printf("\n");
		}
		else if (Input == 3) {
			for (i = 0; i < Input_number; i++) {
				show_fibo[i] = 0;// �迭�� ������ �ʱ�ȭ
			}
			Input_number = -1;//��ǲ ���� �ʱ�ȭ. number�� ���� 1�� �޴����� �ʱ�ȭ �ϱ� ������, ���� �ʱ�ȭ ���� �ʾ���.
		}
		else if (Input == 4) {
			a = 0;//while���� a==1�϶� ���ϱ�, a=0���� �ٲ���. ���Ḧ ����
		}
		else {
			printf("Please input the number between 1 and 4\n");//������Ʈ ���ǿ� ������ Ȥ�� �ٸ� ��츦 ���� �ص�..
		}

	}
}


int Fibo(int n) {//�Ǻ���ġ ���� �Լ�
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return Fibo(n - 1) + Fibo(n - 2);
}