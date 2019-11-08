#include<stdio.h>
#include<stdlib.h>

void main ()

{
	float saldo;
	double novosaldo;
	
	printf("Digite o saldo: \n");
	scanf("%f",&saldo);
    novosaldo=saldo+((saldo/100)*2);
    
    printf("%lf",novosaldo);

}
