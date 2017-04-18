/*
  Morichetti Luca
  3INA
  30/03/2017
  Maggiore con sottoprogramma
  Versione 1.0
*/
#include<stdio.h>
//In questa posizione definisco il mio sottoprogramma
int input_n(int da, int a){
	int n;
	if(da>a){
		int temp;
		temp=da;
		da=a;
		a=temp;
	}
	do{
		printf("\nInserisci numero(%d,%d):",da,a);
		scanf("%d",&n);
	}while((n<da)||(n>a));
	return n;
}
int main(){
	int n1;
	int n2;
	int max;
	//In questo punto richiamo il mio sottoprogramma
	n1=input_n(0,200);
	n2=input_n(0,150);
	if(n1>n2){
		max=n1;
	}else{
		max=n2;
	}
	printf("\nIl numero maggiore e' %d",max);
}
