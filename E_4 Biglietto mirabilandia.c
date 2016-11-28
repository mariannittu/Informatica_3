/*
Morichetti Luca
3°INA
biglietto mirabilandia
ver: 1.0
*/

#include<stdio.h>
#include<stdlib.h>
int main(){
	float euro;//variabile che indica il prezzo
	float comp;//variabile che indica il prezzo per l'accompagnatore
	int h;//variabile per l'altezza
	int e ;//variabile per l'età
	float sup;//variabile supplemento
	int dis;//variabile per disabile o no
	 printf("\ninserisci 1 se la persona e' disabile senno 0:\n");
	 scanf("%d",&dis);  
	  if(dis==1){
	  	euro=0;
	  	comp=25.50;
	  	printf("\nil prezzo del disabile e':%f",euro);                                           //se è disabile calcola anche il suo accompagnatore (se c'è)
	  	printf("\nil prezzo dell eventuale accompagnatore e':%f",comp);
	  } else { 
	         printf("Quanto e' alto?(cm)\n");
	         scanf("%d",&h);
	            if(h<100){
	            	euro=0.00;                                                            //calcolo del prezzo in base all'altezza
	               		}else{
	               	 		if((h<140)  &&  (h>100)){
	               	 	 		euro=28.00;
								}else{
									if(h>140){
										euro=34.90;                                        //calcolo il prezzo finale escluso il supplemento
									}
								}
				   			}
				                     printf("Quanti anni ha?\n");
				                      scanf("%d",&e);
				                      if(e>60){                                    //calcolo del prezzo in base alla sua età 
				                      	euro=25.00;
			                        }
				   }
				          
				                    	printf("\nIl prezzo totale e':%f\n",euro);
	         
	                                 printf("\nInserisci 1 se la persona vuole il supplemento 0 se non lo vuole\n");
									 scanf("%d",&sup);
									   if(sup==1){
									       if(euro==34.90){                                            // calcolo il prezzo con supplemento 
									  	     euro=euro+9.50;
									           }else{ 
									             if(euro<34.90){
									     	       euro=euro+7.50;
									  }
								 }
							 }   
							             printf("il prezzo totale e':%f",euro);        //prezzo finale 
        }
