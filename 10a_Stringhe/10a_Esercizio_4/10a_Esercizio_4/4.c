#include <stdio.h>
#include <string.h>

void printchar(char stringa[]) {
	int i = strlen(stringa);
	if (stringa[0] == '\0') {
		return 0;
	}
	else {
		printf("%c\n", stringa[0]);
		printchar(&(stringa[1]));
	}
}

int main() {

	char stringa[] = "AlexMioMarito";

	printchar(stringa);
	printf("\n");

	return 0;
}