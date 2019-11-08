#include<stdio.h>
#include<stdlib.h>

 int main (void)
{
	int num1,num2;
	double resultado1,resultado2,resultado3,resultado4;
	
	printf("Escreva o primeiro numero: \n");
	scanf ("%d",&num1);
	printf("Escreva o segundo numero: \n");
	scanf ("%d",&num2);
	resultado1=num1+num2;
	resultado2=num1-num2;
	resultado3=num1*num2;
	resultado4=num1/num2;
	printf("%d,%d,%lf,%lf,%lf,%lf",num1,num2,resultado1,resultado2,resultado3,resultado4);
	
	


}
