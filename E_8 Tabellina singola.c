#include<stdio.h>
#include<stdlib.h>
/*
  Morichetti Luca
  3INA
  19/12/2016
  Stampa tabellina tra 2 e 10
  Versione 1.0
*/
int main() {
	int n;
	int i;
	int r;
	
	do{
		printf("Inserisci numero della tabellina tra 2 e 10:");
		scanf("%d",&n);
	}while((n>10)||(n<2));
	i=1;
	while(i<=10) {
		r=n*i;
		printf(" %d",r);
		i++;
	}
}
