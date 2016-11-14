#include <stdio.h>
#include <stdlib.h>

/* Morichetti Luca  3°INA  14/11/2016
 */

int main() {
	int A; // Primo valore
	int B; // Secondo valore
	int C; // Variabile di scambio
		printf("\n Inserisci primo valore\n");
		scanf("%d",& A);
		printf("\n Inserisci secondo valore\n");
		scanf("%d",& B);
		C=B;
		B=A;
		A=C;
		printf("\n I due valori sono: %d   %d ", A,B);
		
	}

	

