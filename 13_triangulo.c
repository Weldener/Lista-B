#include<stdio.h>
#include<stdlib.h>

void main ()

{
	float base,altura;
	double perimetro,area;
	
	printf("Digite a altura: \n");
	scanf("%f",&altura);
	printf("Digite a base: \n");
	scanf("%f",&base);
    perimetro=altura+base;
    area=(altura*base)/2;
    
    printf("perimetro %lf \n area %lf",perimetro,area);
    


}
