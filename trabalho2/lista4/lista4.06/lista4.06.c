/*
* Programacao de Computadores e Algoritmos
* Trabalho 2
* Questao 4.6
* Equipe: Benjamin Borges
* Davi Tavares
* Paulo Henrique
* Fernando Calderaro
* Lucas Frota
* Luiz Fernando
*
* */

#include <stdio.h>

int main(int argc, const char *argv[])
{
	int a,b; //declara as variaveis a e b

	printf("Digite o primeiro numero: \n"); 
	scanf("%d",&a); // recebe o valor de a

	printf("Digite o segundo numero: \n");
	scanf("%d",&b); //recebe o valor de b

	printf("O mdc dos numeros digitados e: %d \n", mdc_euclides(a,b)); //imprime o mdc, chamando a funcao mdc
	return 0;
}
