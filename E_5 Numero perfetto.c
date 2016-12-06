#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*Morichetti Luca
3°INA
28/11/2016
Verifica numero perfetto
Versione 1.0*/
int main(){
	int n1;// variabile per mettere i criteri del numero da verificare
	int n2;// seconda variabile per mettere i criteri del numero da verificare
	int n;//numero da verificare
	int d;//divisore
	int s;//somma divisori
	
	d=1;
	s=0;
	do  													//controllo se n1 rispetta le condizioni
	{
		printf("Inserisci un numero  pari e minore di 10.000\n");
		scanf("%d", &n1);
	}while(((n1%2)!=0) || (n1>=10000));
    do														//controllo se n2 rispetta le condizioni
	{
		printf("Inserisci un secondo numero di cui maggiore del primo e dispari\n");
		scanf("%d", &n2);
	}while((n2<=n1) || (n2%2==0));
	do														//controllo se n rispetta le condizioni
	{
		printf("Inserisci il numero che si vuole verificare che deve essere compreso tra :%d   %d\n",n1,n2);
		scanf("%d", &n);
	}while((n<=n1) || (n>=n2));                             /*faccio ripetere il ciclo finche il divisore non è la metà
															del numero da verificare, poi assegno alla somma dei divisori
															il divisore se il resto porta 0*/
	while(d<=(n/2)) {
		if((n %2)==0) {	
		s=s+d;
		}
	    d=d+1;	
	}
	if(s==n) {												/* se la somma dei divisori è uguale al numero allora 
															   dico che è perfetto, altrimenti no*/													   
		printf("\nIl numero e' perfetto");
		}else{
			printf("\nIl numero non e' perfetto");
		}
	}
	


