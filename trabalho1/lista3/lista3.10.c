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
    int inicio,fim,n,m,i;

    printf("Escreva o primeiro numero:  ");
    scanf("%d",&n);
    printf("Escreva o segundo numero:   ");
    scanf("%d",&m);
    
    /* Verifica qual é o menor e o maio número para definir um inicio e fim*/
    if(n <= m)
    {
    	inicio = n;
    	fim = m;
    }
    else
    {
    	fim = n;
    	inicio = m; 	
    }
    
    for(i = inicio+1;i<fim;i++)
    {
        printf("%d\n",i);
    }

    return 0;
}