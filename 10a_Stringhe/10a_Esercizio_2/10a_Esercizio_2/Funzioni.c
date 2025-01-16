#include "Header.h";

resultType indirizzo(char Cognome[], char Nome[], char Indirizzo[], int dim) {
	resultType result;

	if ((strlen(Cognome) + strlen(Nome) + 1) <= dim) {
		strcat(Indirizzo, Cognome);
		strcat(Indirizzo, " ");
		strcat(Indirizzo, Nome);
		result = RESULT_OK;
	}
	else if ((strlen(Cognome) + 3) <= dim) {
		strcat(Indirizzo, Cognome);
		strcat(Indirizzo, " ");
		char nome[3] = { Nome[0], '.', '\0' };
		strcat(Indirizzo, nome);
		result = RESULT_COMPRESSED_NAME;
	}
	else {
		result = RESULT_ADDRESS_TOO_LONG;
	}
	return result;
}

void handleError(resultType result) {
	switch (result) {
	case RESULT_OK:
		printf("Nessun errore occorso!\n"); break;
	case RESULT_COMPRESSED_NAME:
		printf("Il nome e' stato compresso...\n"); break;
	case RESULT_ADDRESS_TOO_LONG:
		printf("L'indirizzo e' troppo lungo...\n"); break;
	default:
		printf("Unknown error!\n");
	}
}