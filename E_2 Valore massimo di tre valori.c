#include <stdio.h>
#include <stdlib.h>

/* Morichetti Luca   3° INA    14\11\2016 */

int main() {
	int N1;// Primo valore
	int N2;// Secondo valore
	int N3;// Terzo valore
	int MAX;// Variabile con valore massimo
	printf("\n Inserisci primo valore\n");
	scanf("%d", & N1);
	printf("\n Inserisci secondo valore\n");
	scanf("%d", & N2);
	printf("\n Inserisci terzo valore\n");
	scanf("%d", & N3);
	if(N1>N2){
		MAX=N1;
		
	}else{
		MAX=N2;
	}
	if (N3>MAX){
		MAX=N3;
	}
	printf("\n Il valore massimo tra i numeri dati e': %d", MAX);
}
