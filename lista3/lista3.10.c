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
    int inicio,fim;

    printf("Escreva o primeiro numero:  ");
    scanf("%d",&inicio);
    printf("Escreva o segundo numero:   ");
    scanf("%d",&fim);

    for(inicio++;inicio<fim;inicio++)
    {
        printf("%d",inicio);
    }

    return 0;
}
