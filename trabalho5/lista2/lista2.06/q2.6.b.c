/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 5
 * ex.c
 *
 * Equipe:
 *
 *          Delrick Oliveira
 *          Lucas Botinelly
 *          Andressa Moreira
 *          Segio Alexandre 
 *          Juliany Raiol
 *           
 */

#include<stdio.h>
#include<string.h>
#include"f2.6.h"


int main(int argc, const char argv[])
{
    char s[100], t[100]; // vetores para a leitura das duas strings
    int times; // variável que conta o número de vezes

    printf ( "digite o segmento a ser verificado na palavra\n" );
    scanf ( "%s", s ); // lendo a string segmento

    fflush(stdin); // limpeza do buffer 

    printf ( "digite a palavra \n" );
    scanf ( "%s", t ); // leitura da string palavra a ser verificada 

    times = count_segments(s,t); // a variável times armazena a quantidade de vezes que o segmento aparece na palavra 
    printf ( " há %d segmentos\n", times ); // print da variável times 
    return 0;
} 
