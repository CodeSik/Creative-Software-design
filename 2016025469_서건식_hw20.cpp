#include <stdio.h>

long long fact(long long n)
{
	if (n > 1)
		return n * fact(n - 1);

	else if (n == 1)
		return 1;

}

int main(void)
{
	long long n;
	printf("factorial calculator\n");
	printf("input the n : ");
	scanf("%lld", &n);
	printf("result : %lld\n", fact(n));
	return 0;
}
