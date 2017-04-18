/*Morichetti Luca
  Oggetto:inserimento in un array ordinato
  18/04/2017
  Classe 3°INA
  Verione 1.0*/
  
  #include	<stdio.h>
  #include	<stdlib.h>
  #include	<math.h>
  int main(){
      int i;
      int x;
      int n;
      int max;
      int tro;
      int num  [100];
      int tot;
      printf("Inserire un numero:");
      scanf("%d",&n);
      tot=5;
      max=10;
      if(tot<max){
         i=0;
         tro=0;
         while((i<tot)&&(tro=0)){
               if(n<=num[i]){
                  tro=1;
               }else{
                  i++;
               }
         }   
      }
      x=tot-1;
      while(x>=1){
            num[x+1]=num[x];
            x--;
      }
      num[i]=n;
      tot++;
  }
