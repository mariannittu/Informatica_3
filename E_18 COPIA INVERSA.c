/*Morichetti Luca
  Oggetto:Copia inversa
  18/04/2017
  Classe 3°INA
  Verione 1.0*/
  
  #include	<stdio.h>
  #include	<stdlib.h>
  #include	<math.h>
  int main(){
      int n[10];
      int a;
      int i;
      int x;
      x=0;
      while(x<=9){
          printf("\nInserisci numero:");
          scanf("%d",&n[x]);
          x++;
      }
      x=0;
      for(i=9;i>x;i--){
          a=n[i];
          n[i]=n[x];
          n[x]=a;
          x++;
      }
      x=0;
      printf("\n");
      while(x<10){
            printf(" %d",n[x]);
            x++;
      }
      printf("\n");
      system("PAUSE");
  }
