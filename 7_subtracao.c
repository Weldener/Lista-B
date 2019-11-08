#include<stdio.h>
#include<stdlib.h>

 int main (void)
{
	int num1,num2;
	double resultado;
	
	printf("Escreva o primeiro numero: \n");
	scanf ("%d",&num1);
	printf("Escreva o segundo numero: \n");
	scanf ("%d",&num2);
	resultado=num1-num2;
	printf("%d,%d,%lf",num1,num2,resultado);


}
