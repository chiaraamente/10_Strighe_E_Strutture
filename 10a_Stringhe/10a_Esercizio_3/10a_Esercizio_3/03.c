#include <stdio.h>

int occorrenze(char A[], char B[]) {

	int result = 0;
	int trovato = 0;
	int i = 0, j = 0, temp;

	while (B[j] != '\0') {
		if (A[i] == B[j]) {
			trovato = 1;
		}
		temp = j;	//memorizzo la variabile j in temp cos+ poi posso ripartire da quella successiva
		while(A[i] != '\0' && trovato) {
			if (A[i] == B[j]) {
				i++;
				j++;
			}
			else {
				trovato = 0;
			}
		}
		if (trovato) {
			result++;
		}
		i = 0;
		j = temp;
		j++;
	}
	return result;
}

int main() {

	char A[] = "tr";
	char B[] = "tre tigri contro tre tigri";

	printf("Le occorrenze tra \"%s\" e \"%s\" sono: %d\n\n", A, B, occorrenze(A, B));

	return 0;
}