#include <iostream>
#include <cmath>

using namespace std;

int main() {
	while (1) {


		int Number, i, j, b;
		cout << "사이즈를 넣어주세요." << endl;
		int n;
		cin >> n;
		if (n == 0)
			break;
		else if (n % 2 == 0) {
			cout << "짝수만 넣으세요." << endl;
			continue;
		}
		int ** MS = new int*[1000];
		b = 1000;

		for (int i = 0; i < 1000; ++i) {
			MS[i] = new int[b];
		}

		Number = 1;
		i = 1;
		j = (n / 2) + 1;
		MS[i][j] = Number;	
		Number++;

		while (Number <= n*n) {
			if ((Number - 1) % n == 0) {
				i++;
				MS[i][j] = Number;
				Number++;
			}

			else {
				if (i - 1 < 1) {
					i = n;
					j++;
					MS[i][j] = Number;
					Number++;
				}
				else if (j + 1 > n) {

					i--;
					j = 1;
					MS[i][j] = Number;
					Number++;
				}
				else {
					i--;
					j++;
					MS[i][j] = Number;
					Number++;
				}
			}
		}

		for (i = 1; i <= n; i++) {
			for (j = 1; j <= n; j++) {
				cout << MS[i][j] << " ";
			}
			cout << endl;
		}

		for (int i = 0; i < 1000; ++i) {
			delete[] MS[i];
		}
		delete[] MS;
	}
	return 0;
}
