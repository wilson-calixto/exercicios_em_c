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
    int n1,n2, n3;
    char tip;

    printf("Digite a nota 1: ");
    scanf("%d", &n1);
    printf("Digite a nota 2: ");
    scanf("%d", &n2);
    printf("Digite a nota 3: ");
    scanf("%d", &n3);
//    system("clean");
    printf("Digite o tipo de media: \n A- Aritmetica\t P-Ponderada\t H-Harmonica\n");
    scanf("%c", &tip);
    printf("Media: %d", media(n1,n2,n3,tip));
}



