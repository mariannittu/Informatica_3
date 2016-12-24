#include<stdio.h>
#include<stdlib.h>
/*
  Morichetti Luca
  3INA
  19/12/2016
  Fattoriale
  Versione 1.0
*/
int main() {
	int fat;
	int num;
	int i;
	fat=1;
	printf("Inserisci numero\n");
	scanf("%d", &num);
	i=num;
	while(i>0) {
		fat=fat*i;
		i--;
	}
	printf("Il fattoriale di %d e' :%d",num,fat);
}
