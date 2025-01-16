#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define RESULT_OK 1
#define RESULT_COMPRESSED_NAME -1
#define RESULT_ADDRESS_TOO_LONG 0

#define MAX 25

typedef int resultType;

resultType indirizzo(char Cognome[], char Nome[], char Indirizzo[], int dim);
void handleError(resultType result);
