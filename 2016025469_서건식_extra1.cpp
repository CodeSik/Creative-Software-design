#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
		int num = 0;//6���� �õ�
		int input;// ���� ����
		printf("I'm thinking of a number between and including 1 to 100.\n");
		printf("Can you guess the number in 6 tries?\n");

		srand(time(NULL));
		int random= (rand() % 100)+1;//1~100

		while (num < 6) {
			printf("Enter guess number %d : ",num+1);
			scanf("%d", &input);
			if (input == random) {//����
				break;
			}
			else if (input > random) {//Ŭ��
				printf("Too high!\n");
			}
			else if (input < random) {//������
				printf("Too low!\n");
			}
			num++;
		}

		if (input == random) {
			printf("That's correct!");
		}
		else {
			printf("Sorry, bye!");
		}

		return 0;
		
}

