/*
  Morichetti Luca
  3INA
  19/12/2016
  Filtro numeri pari
  Versione 1.0
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int v[10];
    int p[10];
    int n;
    int i;
    int e;
    i=0;
    while(i<=9){
          printf("\nInserisci numero:");
          scanf("%d",&v[i]);
          i++;
    }
    e=0;
    i=0;
    while(i<10){
          if(v[i]%2==0){
             p[e]=v[i];
             e++;
          }
          i++;
    }
    i=0;
    printf("\nI numeri pari inseriti sono:\n\n");
    while(i<e){
          printf("%d\n\n",p[i]);
          i++;
    }
    system("PAUSE");
}
         
