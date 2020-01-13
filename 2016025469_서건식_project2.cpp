#include <stdio.h>

int Fibo(int n);

void main() {
	int a = 1;//while문을 위함.
	int Input, number, i,Input_number=-1;
	int show_fibo[300];/*Input은 메뉴 선택
		number는 피보나치 항의 갯수,Input_number는 그 지역변수
		Input_number를 설정한 이유는, Initialize한뒤 프로그램이 종료되는 현상을 막기 위함으로, 따로 값을 카피해놓음.
		show_fibo는 피보나치 출력용. 배열 크기의 관한 언급이 없어 임의로 300으로 정함 */
	while (a == 1) {
		printf("**********************\n1. Calculate\n2. Show it!\n3. Initialize\n4. Quit\n**********************\n");
		printf("Input : ");//메뉴 선택
		scanf_s("%d", &Input);
		if (Input == 1) {//1일때
			printf("Input the number : ");
			scanf_s("%d",&number);
			Input_number = number;//number의 값을 Input_number에 저장.
		}
		else if (Input == 2) {
			for (i = 0; i < Input_number; i++) {
				show_fibo[i] = Fibo(i);//첫 값부터 저장.
				printf("%d ", show_fibo[i]);//0부터 출력해줌.
			}
			printf("\n");
		}
		else if (Input == 3) {
			for (i = 0; i < Input_number; i++) {
				show_fibo[i] = 0;// 배열의 값들을 초기화
			}
			Input_number = -1;//인풋 값을 초기화. number의 값은 1번 메뉴에서 초기화 하기 때문에, 따로 초기화 하지 않았음.
		}
		else if (Input == 4) {
			a = 0;//while문은 a==1일때 도니까, a=0으로 바꿔줌. 종료를 위함
		}
		else {
			printf("Please input the number between 1 and 4\n");//프로젝트 조건엔 없지만 혹시 다른 경우를 위해 해둠..
		}

	}
}


int Fibo(int n) {//피보나치 수열 함수
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return Fibo(n - 1) + Fibo(n - 2);
}