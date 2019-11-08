#include<stdio.h>
#include<stdlib.h>

void main ()
{
	float num1,num2,num3;
	double resultado;
	
	printf("Digite a altura: \n");
	scanf("%f",&num1);
	printf("Digite o segundo numero: \n");
	scanf("%f",&num2);
	printf("Digite o terceiro numero: \n");
	scanf("%f",&num3);
	
	resultado=(num1+num2+num3)/3;
	
	printf("O resultado e: %lf",resultado);
	
}
