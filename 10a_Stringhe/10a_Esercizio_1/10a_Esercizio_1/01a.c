#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define DIM 128

int conc(char A[], char B[], char C[]) {
	strcpy(C, A);
	strcpy(&(C[strlen(C)]), B);
	return strlen(C);
}

int main() {
	char A[] = "Che bel ";
	char B[] = "castello!";
	char C[DIM];
	
	int j = conc(A, B, C);
	printf("%s\n\n", C);

	return 0;
}