/*
Programação de Computadores e Algoritmos
Trabalho 1
Questão 2.2

Equipe:
	Evandro Fernandes
	Wilson Neto
	John Lucas
	Jessica Kelly
	Fernando Antonio
	Jailson Pereira
	Juliany Raiol
	Raí Santos*/

#include <stdio.h>

int main(int argc, const char *argv[])
{
	int valor;
	printf("digite um valor: \n");
	scanf("%d",&valor);
	
	if (valor > 0)
	{
	 	printf("Positivo \n");
	}
	
	else if (valor == 0)
	{
		printf("Neutro");
	}

	else
	{
		printf("Negativo \n");
	}




	return 0;
}

