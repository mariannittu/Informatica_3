#include<stdio.h>
#include<stdlib.h>
/*
  Morichetti Luca
  3INA
  19/12/2016
  Calcolo numero minimo
  Versione 1.0
*/
int main() {
	int n;
	int i;
	int num;
	int min;
	printf("Inserire quanti numeri si vuole mettere:");
	scanf("%d",&n);
	i=1;
	printf("\nInserisci primo numero:");
	scanf("%d",&num);
	min=num;
	while(i<n) {
		printf("\nInserisci numero:");
		scanf("%d",&num); 
			if(num<min) {
				min=num;
			}
			i++;
	}
	printf("\nIl numero minimo e':%d",min);
}
