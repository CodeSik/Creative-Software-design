#include <stdio.h>

int main(void) {

	int exponent = 0, power_of_n = 1;
	int num = 0;

	printf("input number : "); //�ϳ��� �� N�� �Է¹޴´�.
	scanf("%d", &num);

	while (++exponent <= 10)
	{
		printf("%d\t", num*power_of_n);
		power_of_n=power_of_n*num;

	}
	printf("\n");
	return 0;
}