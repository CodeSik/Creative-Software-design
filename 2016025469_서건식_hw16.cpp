/*#include <stdio.h>
#include <ctype.h>
#include <String.h>

int main(void) {
	char c;
	int i,num,cnt=0;
	printf("Input the number to check :");
	scanf(" %d", &num);

	char string1[100]; char string2[100];

	printf("Input the string1 :");

	scanf("%s", string1);
	printf("Input the string2 :");
	scanf("%s", string2);
	for (i = 0; i<num && string1[i] != '\0'; i++) {
		if (string1[i] == string2[i])  cnt++;
	}
	if (string1[i] == string2[i] && string1[i] == '\0'&&strlen(string1) == cnt) {
		printf("equal\n");
	}
	else if (cnt == 0) {
		printf("not equal\n");
	}
	else printf("equal %d character\n", cnt);
	return 0;

}*/