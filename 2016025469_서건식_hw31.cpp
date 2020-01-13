#include <iostream>

using namespace std;

Fact(int n)
{
	if (n == 0)
		return 0;
	else if (n > 0)
		return n*Fact(n - 1);
}

int main()
{
	int n;
	cin >> n;
	Fact(n);
}