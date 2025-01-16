#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ITEM 5

typedef struct {
	char name[16];
	float oldPrice, newPrice;
}item;

lettura(item prezzi[], int  max, int* num) {
	int i = 0;
	do {
		printf("PRODOTTO %d\n", i + 1);
		printf("Inserisci il nome del prodotto: ");
		scanf_s("%s", prezzi[i].name, 16);

		if ((strcmp(prezzi[i].name, "fine") != 0)) {
			printf("Inserisci il prezzo PRIMA dell'inflazione: ");
			scanf_s("%f", &prezzi[i].oldPrice);
			printf("Inserisci i prezzo DOPO l'inflazione: ");
			scanf_s("%f", &prezzi[i].newPrice);
			printf("\n");
			i++;
		}

	}while (i < max && (strcmp(prezzi[i].name, "fine") != 0));
	
	*num = i;
	return 0;
}

int main() {

	item prezzi[MAX_ITEM];
	int size;
	float tassoInfl;

	lettura(prezzi, MAX_ITEM, &size);

	printf("\n\nELENCO PRODOTTI CON TASSO DI INFLAZIONE:\n\n");
	for (int i = 0; i < size; i++) {
		printf("PRODOTTO %d\n", i + 1);
		printf("Nome: %s\n", prezzi[i].name);

		tassoInfl = ((prezzi[i].newPrice / prezzi[i].oldPrice) - 1) * 100;
		printf("Tasso d'inflazione: %.2f%%\n\n", tassoInfl);
	}

	return 0;
}