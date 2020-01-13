#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
void bubbleSort(int*, int);
int main(void)
{
	string s;
	cout << "string>> ";
	getline(cin, s);
	int num = s.length() / 2; num++;
	char *arr = new char[100];
	int *arr1 = new int[100];
	int j=0;
	for (int i = 0; i < s.length(); i++)  
	{
		if ((i % 2) == 0) {         
			arr[j] = s[i];            
			j++;
		}
	}
	for (int j = 0; j < num; j++)
	{
		arr1[j] = arr[j] - 48;         
	}
	bubbleSort(arr1, num);           
	for (int j = 0; j < num; j++)

		cout << arr1[j]<<' ';

	cout << endl;
	delete(arr); delete (arr1);
	
	return 0;
}
void bubbleSort(int * input, int size) {
	int temp;
	for (int i = 1; i < size; ++i)
	{
		for(int j=0;j<(size -i);++j)
		if (input[j] > input[j + 1])
		{
			temp = input[j];
			input[j] = input[j + 1];
			input[j + 1] = temp;
		}
	}
}