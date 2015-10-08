/*
 *  *  Programação de Computadores e Algoritmos
 *     Trabalho 5
 *     Questão 5.02
 *     Equipe: 
 *	Manoel Victor
 *      Paulo Marinho
 *      Wilson Araujo 
 *   
 */

#include <stdio.h>
#include <stdlib.h>
#include "strparaint.h"
#define TAMANHO 10000

int main(int argc, const char *argv[])
{
    int numero;
    char string[TAMANHO]; //declara o tamanho da string

    printf("Digite a String Decimal: ");
    fgets(string,TAMANHO,stdin);  //fgets() serve para pegar a string do tamanho desejado, para nao dar bugs

    printf("String em inteiro: %d\n\nOperação para prova: %d\n", strparaint(string),strparaint(string)*2);
    // imprime a função, e imprime uma prova da conversão.
    return 0;
}
