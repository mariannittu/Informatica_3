#include<stdio.h>
#include<stdlib.h>
/*
  Morichetti Luca
  3INA
  19/12/2016
  Stampa tabelline dal 2 al 10
  Versione 1.0
*/
int main () {
	int r;
	int tab;
	int i;
	
	tab=2;
	while(tab<=10) {
		i=1;
		while(i<=10) {
			r=tab*i;
			printf (" %d",r);
			i++;
		}
		printf("\n");
		tab++;
	}
}
