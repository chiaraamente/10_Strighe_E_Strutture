#include "tempo.h"

Time leggiTime() {
	Time Tempo;
	printf("Inserisci l'ora: ");
	scanf_s("%d", &Tempo.hour);
	printf("Inserisci i minuti: ");
	scanf_s("%d", &Tempo.minute);
	printf("Inserisci i secondi: ");
	scanf_s("%d", &Tempo.second);
	printf("\n\n");
	return Tempo;
}

int leggiMoreTimes(Time v[], int dim) {
	int result = 0;
	Time temp;
	do{
		printf("TEMPO %d\n", result + 1);
		temp = leggiTime(); 
		if (temp.hour > 0) {
			v[result] = temp;
			result++;
		}
	} while (result < dim && temp.hour > 0);
	return result;
}

Time subtract(Time t1, Time t2) {
	int secTot1 = (t1.hour * 3600) + (t1.minute * 60) + t1.second;
	int secTot2 = (t2.hour * 3600) + (t2.minute * 60) + t2.second;
	int secDiff;
	Time newTime;

	if (secTot1 > secTot2) {
		secDiff = secTot1 - secTot2;
	}
	else {
		secDiff = secTot2 - secTot1;
	}
	
	newTime.hour = secDiff / 3600;
	newTime.minute = (secDiff % 3600) / 60;
	newTime.second = (secDiff % 3600) % 60;
}