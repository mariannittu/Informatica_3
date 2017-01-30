#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int k;
	int v[100];
	int i;
	int pos;
	int num;
	int t;
	do{
		printf("Inserisci k:");
		scanf("%d",& k);
	}while((k>100)||(k<0));
	printf("Inserisci numero da trovare");
	scanf("%d",& num);
	i=0;
	while(i<k){
		printf("Inserisci valori vettori:");
		scanf("%d",& v[i]);
		i++;
	}
	i=0;
	t=0;
	while((i<k)||(t==0)){
		if(v[i]=num){
			t=1;
			pos=1;
		}else{
		}
		i++;
	}
	if(t==0){
		printf("il numero non e' in lista");
	}else{
		i=pos;
		while(i<k){
			v[i]=v[i++];
		}
		i=pos;
		while(i<k){
			printf(" %d",v[i]);
			i++;
		}
		printf("\nIl numero e' stato trovato alla posizione %d",pos);
	}
	
}
