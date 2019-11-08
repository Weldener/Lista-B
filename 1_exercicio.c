#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
	float a1, a2, b1, b2;
	float distancia;
	printf("\nDigite o valor de a1:");
	scanf("%f",&a1);
	printf("\nDigite o valor de b1:");
	scanf("%f",&b1);
	printf("\nDigite o valor de a2:");
	scanf("%f",&a2);
	printf("\nDigite o valor de b2:");
	scanf("%f",&b2);
	distancia=sqrt(pow((a2-a1),2)+pow((b2-b1),2));
	printf("\nA distancia entre os pontos P1 e P2 e %.2f\n",distancia);
	system("PAUSE");
		
}
