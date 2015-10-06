/*
 * Programação de Computadores e Algoritmos
 *
 * Trabalho 5
 *
 * Questao 04
 *
 * Grupo:
 *          Manoel Victor
 *          Paulo Marinho
 *          Wilson Araujo
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "NumeroChar.h"
#define TAM 10000


int main(int argc, const char *argv[])
{

    char s[TAM], *copia, ch[TAM];// s - string, copia - copia da string, ch - vetor de chars 

    copia = malloc(sizeof(char*) * strlen(s) + 1); // copia recebe a qtd de endereços de memoria igual ao tamanho da 
                                                   // string 's' + 1 (o delimitador)
    printf("Informe uma string:\n");
    fgets(s, TAM, stdin); //recebe string

    strcpy(copia, s); //copia o conteudo de 's' para 'copia'

    geraCh(copia, ch); //gera o vetor de chars

    printS(s); //mostra a string

    puts(""); //pula uma linha

    Lista(s, ch, copia); //mostra a Lsita de chars e suas respectivas qtds dentro da string

    return 0;
}
