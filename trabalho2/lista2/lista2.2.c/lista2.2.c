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

int main(int argc, const char *argv[]) {
    double n1,n2,n3, res;
    char tip;

    printf("Digite a nota 1: ");
    scanf("%lf", &n1);
    printf("Digite a nota 2: ");
    scanf("%lf", &n2);
    printf("Digite a nota 3: ");
    scanf("%lf", &n3);
    fflush(stdin); // Limpa o buffer do teclado
    printf("Digite o tipo de media: \n A- Aritmetica\t P-Ponderada\t H-Harmonica\n");
    scanf(" %c", &tip);
    res = media(n1, n2, n3);
    printf("Media: %.2lf \n ", res);
}



