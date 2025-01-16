#include <stdio.h>
#include <string.h>

#define DIM 5

typedef struct {
	char nome[21];
	int codice;
	int goalFatti;
	int goalSubiti;
}squadra;

int main() {

	squadra Squadre[DIM];
	int lim;
	int codice;

	printf("Quante squadre andrai ad inserire? ");
	scanf_s("%d", &lim);

	if (lim <= DIM) {
		for (int i = 0; i < lim; i++) {
			printf("\n\nSQUADRA %d", i + 1);
			printf("\nInserisci il nome della squadra: ");
			scanf_s("%s", Squadre[i].nome, 21);
			printf("Inserisci il codice: ");
			scanf_s("%d", &Squadre[i].codice);
			printf("Inserisci il numero di goal Fatti: ");
			scanf_s("%d", &Squadre[i].goalFatti);
			printf("Inserisci il numero di goal Subiti: ");
			scanf_s("%d", &Squadre[i].goalSubiti);
		}
		printf("\n\nSquadre in cui goal FATTI >>> goal SUBITI:");
			for (int i = 0; i < lim; i++) {
				if (Squadre[i].goalFatti > Squadre[i].goalSubiti) {
					printf("\n\nSQUADRA %d", i + 1);
					printf("\nNome: %s", Squadre[i].nome);
					printf("\nCodice: %d", Squadre[i].codice);
				}
			}
			
			printf("\n\n\nInserisci il codice di una squadra: ");
			scanf_s("%d", &codice);
			for (int i = 0; i < lim; i++) {
				if (Squadre[i].codice == codice) {
					printf("\nSQUADRA %d", i + 1);
					printf("\nNome: %s", Squadre[i].nome);
					printf("\nGoal Fatti: %d", Squadre[i].goalFatti);
					printf("\nGoal Subiti: %d", Squadre[i].goalSubiti);
				}
			}
			printf("\n\n\n");
	}
	else {
		printf("\nIl numero da lei inserito e' troppo grande... messere... la prego... programmo da giorni...collabori...\nDoveva fare solo una cosa... \n\nSOLO UNA.\n\nINSERIRE UN NUMERO <= 5. CHE LE COSTAVA FARLO, EH..?!!?? \nCome  ci si sente ad avere reso nullo il mio duro lavoro. \n\nHo chiesto. \nCome. \nCI. \nSI. \nSENTEEEEEEEEEEEEEEEEEEEE. \n\nVADA VIA. VIAAA. VIA DA QUI. \n\nSPARISCAAAAAAAAAAAAAAAAAA\n\n\n");
	}

	return 0;
}
 