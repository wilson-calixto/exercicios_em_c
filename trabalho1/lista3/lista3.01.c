/*
Programação de Computadores e Algoritmos
Trabalho 1
Questão 3.1

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
    int n;
    printf("Digite o numero: \n");
    scanf("%d", &n);
    while(n<0 || n>10)
    {
        printf("Valor Invalido, digite novamente: ");
        scanf("%d", &n);
    }

    printf("Valor digitado: %d \n", n);

    return 0;
}
