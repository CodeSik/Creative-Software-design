/*#include <stdio.h>
#include <stdlib.h>
#include <String.h>
#include <ctype.h>

void main() {
	FILE * data;
	char a[10000] = { '\0' };
	char b;
	int i=0;
	fopen_s(&data, "data.txt", "r+");
	
	while ((b = fgetc(data)) != EOF) {
		if (islower(b) == 0) a[i] = tolower(b);
		else a[i] = toupper(b);
		i++;
	}
	fclose(data);
	FILE * data2;
	fopen_s(&data2, "data.txt", "r+");
	fputs(a, data2);
	fclose(data2);
}*/