#include <stdio.h>
#include <string.h>

#define DIM 5

typedef struct {
	char denominazione[21];
	char cognome[16];
	int iscritti;
}corso;

int main() {

	corso Corsi[5];
	int lim, media, totIscritti = 0;

	printf("Quanti corsi andrai ad inserire? ");
	scanf_s("%d", &lim);

	if (lim <= 5) {
		for (int i = 0; i < lim; i++) {
			printf("\n\nCORSO %d\n", i + 1);
			printf("Inserisci il nome del corso: ");
			scanf_s("%s", Corsi[i].denominazione, 21);
			printf("Inserisci il cognome del docente: ");
			scanf_s("%s", Corsi[i].cognome, 16);
			printf("Inserisci il numero di iscritti: ");
			scanf_s("%d", &Corsi[i].iscritti);
			totIscritti += Corsi[i].iscritti;
		}
		media = totIscritti / lim;
		printf("\n\nCorsi in cui il numero degli iscritti e' maggiore rispetto alla media:\n\n");

		for (int i = 0; i < lim; i++) {
			if (Corsi[i].iscritti > media) {
				printf("CORSO %d\n", i + 1);
				printf("%s\n%s\n\n", Corsi[i].denominazione, Corsi[i].cognome);
			}
		}
	}
	else {
		printf("\nNumero di corsi troppo grande, inserire un limite MASSIMO di 5\n\n");
	}

	return 0;
}