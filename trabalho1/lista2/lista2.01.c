/*

Programacao de Computadores e Algoritmos 

Trabalho1

Questão 2.1

Equipe: Evandro Fernandes
	Fernando Antonio
	Jailson Pereira
	Jessica Kelly
	Jhon Lucas
	Juliany Raiol
	Wilson Neto
	Raí Santos
*/

#include <stdio.h>

int main(int argc, const char *argv[])
{
	int a,b;
	printf("Digite um numero: \n");
	scanf("%d", &a);
	
	printf("Digite um outro numero: \n");
	scanf("%d", &b);
	
	if (a > b) 
	{
		printf("O maior numero é: %d\n",a);
	}
	else 
	{
		printf("O maior numero é: %d\n",b);
	}
	
	return 0;
}
