
#include<stdio.h>
/*
  Morichetti Luca
  3INA
  19/12/2016
  Calcolo media
  Versione 1.0
*/
 int main(){
	    int N; // numero numeri
	    int I; //contatore
	    int Num; // numero
	    int Somma; // somma dei numeri
	    float Media; // media numeri
	    printf("Inserire quanti numeri si vuole\n");
	    scanf("%d",&N);
	    Somma=0;
		I=0;
		while(I<N){
			        printf("Inserire numero\n");
			        scanf("%d",&Num);
			        Somma=Somma+Num;
			        I++;
		          }
	    Media=Somma/N;
	    printf("La media e':%f",Media);
	}
	   
