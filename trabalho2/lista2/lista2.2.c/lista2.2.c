/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 1
 * lista2.2.c
 *
 * Equipe:
 *
 *          Ewerton
 *          Jailson
 *          Hermann
 *          Wilson
 *          Lucas
 *          Richardson 
 */
#include <stdio.h>
#include "function.h"
#include <string.h>

int main(int argc, const char *argv[])
{
    float n1,n2,n3, res;
    char tip;

    printf("Digite a nota 1: ");
    scanf("%f", &n1);
    printf("Digite a nota 2: ");
    scanf("%f", &n2);
    printf("Digite a nota 3: ");
    scanf("%f", &n3);
    getchar();   
    printf("Digite o tipo de media: \n A- Aritmetica\t P-Ponderada\t H-Harmonica\n");
    scanf("%c", &tip);
    res = media(n1,n2,n3,tip); // Variavel para receber o retorno da funcao
    printf("Media: %.2f \n ", res);
    return 0;
}



