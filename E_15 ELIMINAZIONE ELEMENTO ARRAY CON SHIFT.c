/*
  Morichetti Luca
  3INA
  19/12/2016
  Eliminazione di un elemento in un array
  Versione 1.0
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int v[10];
    int i;
    int pos;
    int tot;
    i=0;
    while(i<=9){
          printf("\nInserisci numero:");
          scanf("%d",&v[i]);
          i++;
    }
    tot=10;
    printf("\nInserisci posizione dell'elemento da eliminare:");
    scanf("%d",&pos);
    for(i=pos;i<tot;i++){
        v[i]=v[i+1];
    }
    tot--;
    for(i=0;i<tot;i++){
        printf("\n\n%d",v[i]);
    }
    system("PAUSE");
}
    
    
