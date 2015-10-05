/*
 *Programaçao de Computadores e Algoritmos
 *Trabalho 5
 *Questão 6 da Lista 02
 *Grupo:
 *	Andressa Moreira 
 *	Delrick Oliveira;
 *	Sergio Alexandre;
 *	Lucas Botinelly;
 *	Juliany Raiol;
 */

#include<stdio.h>
#include<string.h>
#include"f2.6.h"

int main (int argc, const char *argv[])
{
    char s[100], t[100];
    int n=0; // valor a ser enviado para a função indicando que é para ler desde o início do vetor ;
    printf ( "digite a segmentação a ser verificada\n" );
    scanf ("%s", s );// leitura da segmentação
    fflush(stdin); // limpeza do buffer
    printf ( "digite uma palavra para ser verificada\n" );
    scanf ( "%s", t ); // leitura da palavra a ser verificada a segmentação
    if(is_segment(n, s, t)) // se a função retornar qualquer valor diferente de 0 então a string é um segmento ;
    {
        printf ( "%s é segmento de %s \n",s, t );
    }
    else
    {
        printf ( "não existe segmentação\n" );
    }  
	return 0;
}



