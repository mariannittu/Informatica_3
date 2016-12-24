#include<stdio.h>
#include<stdlib.h>
/*
  Morichetti Luca
  3INA
  19/12/2016
  Indovina numero
  Versione 1.0
*/
int main() {
	int n_u;
	int t;
	int n_c;
	int ind;
	
	n_c=rand()%15;
	ind=0;
	t=10;
	printf("il pc ha pensato un numero da 1 a 14");
	do{
		printf("\nIndovinalo con 10 tentativi:");
		scanf("%d",&n_u);
		if(n_u==n_c) {
			ind=1;
		}
		t--;
	}while(t>0&&ind==0);
	if(ind==1) {
		printf("Hai vinto");
	}else{
		printf("Hai perso");
	}
}
		
