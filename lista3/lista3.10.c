/*
Programação de Computadores e Algoritmos
Trabalho 1
Questão 3.10

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
    if(inicio>fim)
    {
    	inicio=inicio+fim;
    	fim=inicio-fim;
    	inicio=inicio-fim;
    }
    for(inicio++;inicio<fim;inicio++)
    {
        printf("%d\n",inicio);
    }

    return 0;
}
