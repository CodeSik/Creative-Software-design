#include <stdio.h>
#include <stdlib.h>

void main() {
	FILE * data;
	char a[100];
	char b;
	fopen_s(&data, "data.txt", "w+");

	for (int i = 0; i != \0; i++) {
		if (a <= data[i] && data[i] <= z) {
			data[i] -= 32;
		}
		else if (A<=data[i]&&data[i]<=Z){
			data[i] += 32;
		}
	}
	fclose(data);
}