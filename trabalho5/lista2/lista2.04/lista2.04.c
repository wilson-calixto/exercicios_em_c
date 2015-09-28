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
#define TAM 10


int main(int argc, const char *argv[])
{

    char s[TAM], *copia, ch[TAM];

    copia = malloc(sizeof(char*) * strlen(s) + 1);

    printf("Informe uma string:\n");
    fgets(s, TAM, stdin); 

    strcpy(copia, s);

    geraCh(copia, ch);

    printS(s);

    puts("");

    Lista(s, ch, copia);

    return 0;
}


