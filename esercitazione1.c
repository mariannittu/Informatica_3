#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int n1;
	int n2;
	int k;
	int v[999];
	int c[999];
	int i;
	int num;
	int t;
	do{
		printf("Inserire n2<100 e dispari:");
		scanf("%d",& n2);
	}while((n2>1000)||(n2%2==0)||(n2<0));
	do{
		printf("Inserire n1 minore di n2 e maggiore di 0:");
		scanf("%d",& n1);
	}while((n1>n2)||(n1<0));
	do{
		printf("Inserisci k compreso tra n1 e n2:");
		scanf("%d",& k);
	}while((k<n1)||(k>n2));
	i=0;
	while(i<k){
	printf("inserisci valore:");
	scanf("%d",& v[i]);
	i++;
	}
	printf("Inserire scalare num:");
	scanf("%d",& num);
    for(i=0;i<k;i++){
    	v[i]=v[i]*num;
	}
	t=0;
	i=0;
	while(t<k){
		printf("%d\n",v[i]);
		t++;
		i++;
	}
}
