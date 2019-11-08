#include<stdio.h>
#include<stdlib.h>

 int main (void)
{
    char nome[100];
    char endereco[100];
	int telefone;
	
	printf("Digite seu nome: \n");
	scanf("%s",&nome);
	printf("Digite seu endereço: \n");
	scanf("%s",&endereco);
	printf("Digite seu telefone: \n");
	scanf("%d",&telefone);
	printf("\n%s,\n%s,\n%d",nome,endereco,telefone);

    system("PAUSE");
	return 0;
}




