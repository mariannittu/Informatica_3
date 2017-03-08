/*
  Morichetti Luca
  3INA
  19/12/2016
  Caricamento e stampa inversa array
  Versione 1.0
*/
#include<stdio.h>
#include<stdlib.h>

int main() {
    int n[10];
    int x;
    x=0;
    while(x<=9){
          printf("\nInserisci numero:");
          scanf("%d",&n[x]);
          x++;
    }
    while(x>=0){
          if(n[x]!=0){
               printf(" %d",n[x]);
          }
          x--;
    }
    system("PAUSE");
}
