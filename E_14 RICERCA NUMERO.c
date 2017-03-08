/*
  Morichetti Luca
  3INA
  19/12/2016
  Ricerca numero
  Versione 1.0
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int v[10];
    int i;
    int pos;
    int tro;
    int n;
    i=0;
    while(i<=9){
          printf("\nInserisci numero:");
          scanf("%d",&v[i]);
          i++;
    }
    i=0;
    tro=0;
    printf("\nInserisci numero da trovare:");
    scanf("%d",&n);
    while((i<10)&&(tro==0)){
          if(v[i]==n){
             tro=1;
             pos=i;
          }
          i++;
    }
    if(tro==0){
       printf("\nIl numero non e' stato trovato\n\n");
    }else{
       printf("\nIl numero e' stato trovato alla posizione:%d\n\n",pos+1);
    }
    system("PAUSE");
}
       
    
             
    
