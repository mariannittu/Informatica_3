/*Morichetti Luca
  Ricerca binaria
  27/02/2017
  Classe 3°INA
  Verione 1.0*/
  
  #include	<stdio.h>
  #include	<stdlib.h>
  #include	<math.h>
  int main(){
  	int v[20]={1,4,10,13,15,20,24,27,30,40,56,59,60,62,65,69,72,75,98,99};			//inizializzo vettore
  	int flag;																		//flag controllo
  	int max;																		//massimo vettore
  	int min;																		//minimo vettore
  	int cc;																			//centro vettore
  	int n;																			//numero da trovare
	
	flag=0;  																		//var non trovata
	max=19;																			//inizializzo massimo
	min=0;																			//inizializzo minimo
	cc=0;																			//inizializzo centro
	printf("Inserisci numero da trovare:");
	scanf("%d",&n);																	//input numero da trovare
	while((flag==0)&&(max>min)){													//condizione per ripetere il ciclo
		if(v[cc]==n){																// se il numero è uguale a quello da cercare
			flag=1;																	//imposto flag a 1
		}else{
			if(v[cc]>n){															//se numero è maggiore di quello da trovare
				min=cc;																//reimposto minimo
				cc=(max-min)/2+min;													//reimposto centro
			}else{
			    max=cc;																//reimposto massimo
			    cc=(max-min)/2+min;													//reimposto centro
			}
		}
	}
	if(flag==1){																	//output se numero è trovato o no
		printf("Numero trovato alla posizione:%d",cc);
	}else{
		printf("Numero non trovato");
	}
}
