/*Morichetti Luca
  Confronto tra due stringhe
  18/04/2017
  Classe 3�INA
  Versione 1.0*/
  
  #include	<stdio.h>
  #include	<stdlib.h>
  #include	<math.h>
  
  int main(){
      char s1[100];
      char s[100];
      int x;
      int t;
      printf("Inserisci prima stringa:");
      scanf("%s",s1);
      printf("\nInserisci seconda stringa:");
      scanf("%s",s);
      x=0;
      t=1;
      while(t==1&&(s[x]!=0||s1[x]!=0)){
            if(s[x]!=s1[x]){
                t=0;
            }
            x++;
      }
      if(t==1){
         printf("\nUguale");
      }else{
         printf("\nDiversi");
      }
      system("PAUSE");
  }   1  styles.xmlPK     L�:8RX��  �               �  meta.xmlPK   L�:�׃�|   �                  Thumbnails/thumbnail.pngPK   L�:{e��  �               �  settings.xmlPK   L�:e�H�D  a                 META-INF/manifest.xmlPK      �  �   
