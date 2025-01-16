#include "Header.h"	//quando sono miei header file non vanno usate le parentesi triangolari bensì le virgolette

int main() {

	char Indirizzo[MAX] = { '\0' };	//bisogna inizializzare la stringa a una stringa vuota in modo tale che funzioni tutto correttamente, dato che strcat inizia a scrivere da \0;
	char Cognome[30];
	char Nome[30];
	resultType result;

	printf("Inserisci il Cognome: ");
	scanf_s("%s", Cognome, 30);	//puoi scrivere 14 caratteri, il 15esimo è per il carattere terminatore
	printf("Inserisci il Nome: ");
	scanf_s("%s", Nome, 30);
	printf("\n\n");

	result = indirizzo(Cognome, Nome, Indirizzo, MAX - 1);

	if (result == RESULT_OK || result == RESULT_COMPRESSED_NAME) {
		printf("Indirizzo: %s", Indirizzo);
	}
	else {
		handleError(result);
	}
	printf("\n\n");

	return 0;
}