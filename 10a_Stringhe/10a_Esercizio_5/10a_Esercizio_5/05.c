#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<string.h>

#define RESULT int

#define MAX 6

#define FUN_OK 1
#define ERROR_TOO_MANY_NUMBERS 0

RESULT stampaDettagli(float num, int n1, int n2) {
	int result;
	char stringaFormato[MAX];
	char num1[MAX];	//stringa dove memorizzo n1
	char num2[MAX];	//stringa dove memorizzo n2

	sprintf(num1, "%d", n1);
	sprintf(num2, "%d", n2);

	if ((strlen(num1) + strlen(num2) + 1) <= (MAX - 1)) {
		sprintf(stringaFormato, "%%%d.%df", n1, n2);
		printf("Il formato generato e': %s\n", stringaFormato);
		printf(stringaFormato, num);	//stringaFormato rappresenta un'allocazione dinamica, ed � come se ci fosse scritto "%%%d.%df"
		printf("\n\n");
		result = FUN_OK;
	}
	else {
		result = ERROR_TOO_MANY_NUMBERS;
	}
	return result;
}

void checkResult(RESULT result, char str[]) {
	switch (result) {
	case FUN_OK:
		strcpy(str, ""); break;
	case ERROR_TOO_MANY_NUMBERS:
		strcpy(str, "La stringa di formato non puo' contenere tutti questi numeri..!"); break;
	default:
		strcpy(str, "UNKNOWN_ERROR");
	}
}

int main() {
	float num;
	int n1, n2;
	char str[100];
	RESULT result;


	printf("Inserisci un numero reale: ");
	scanf_s("%f", &num);
	printf("Inserisci un intero n1 e un intero n2 per la stringa di formato: ");
	scanf_s("%d%d", &n1, &n2);
	printf("\n");

	result = stampaDettagli(num, n1, n2);

	if (result != FUN_OK) {
		checkResult(result, str);
		printf(str);
		printf("\n\n");
	}
}
