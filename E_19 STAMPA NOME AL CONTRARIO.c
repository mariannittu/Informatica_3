/* Oggetto: Matrice nulla
   Morichetti Luca
   Classe:3ina
   Data:18/04/2017
   Versione:1.0 */
  #include	<stdio.h>
  #include	<stdlib.h>
  #include	<math.h>
  int main(){
      int i;
      char n[256];
      int k;
      
      printf("Inserisci un nome:");
      scanf("%s",n);
      i=0;
      while(n[i]!=0){
            i++;
      }
      k=i;
      i=i-1;
      printf("\n");
      while(i>=0){
            printf(" %d",n[i]);
            i--;
      }
      printf("\n\nNome composto da %d lettere\n\n",k);
      system("PAUSE");
  }
