#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
	float altura, raio, cilindro, litros, latas, custo;
	printf("\nDigite o valor da altura em metros: ");
	scanf("%f", &altura);
	printf("\nDigite o valor do raio em metros: ");
	scanf("%f", raio);
	cilindro=3.14*raio*raio+2*3.14*raio*altura;
	printf("\n A area do cilindro e %.2f metros quadrados",cilindro);
	litros=cilindro/3;
	printf("\nA quantidade de litros necessaria e de %.2f", litros);
	latas=litros/5;
	printf("\nA quantidade de latas necessaria e de %.2f", latas);
	custo=latas*20;
	printf("\nO valor  das tintas necessaria e de R$ %.2f\n", custo);
	system("PAUSE");
	
}
