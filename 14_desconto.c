#include<stdio.h>
#include<stdlib.h>

void main ()

{
    float produto,porcentual;
    double desconto,resultado;
    
    printf("Digite o valor do produto: \n");
    scanf("%f",&produto);
    printf("Digite o valor do porcentual: \n");
    scanf("%f",&porcentual);
    desconto=produto-((produto/100)*porcentual);
    resultado=produto-desconto;
    printf("%lf,%lf", desconto, resultado);
}
