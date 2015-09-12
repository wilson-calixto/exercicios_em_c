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
#include "calc_media.h"

int main(int argc, const char *argv[])
{
    float n1,n2,n3, res;
    char tip;
    printf("Digite a nota 1: ");
    scanf("%f", &n1); // Le a primeira nota
    printf("Digite a nota 2: ");
    scanf("%f", &n2); // Le a segunda nota
    printf("Digite a nota 3: ");
    scanf("%f", &n3); // Le a terceira nota
    getchar();   // limpa o buffer do teclado para poder ler a string
    printf("Digite o tipo de media: \n A- Aritmetica\t P-Ponderada\t H-Harmonica\n");
    scanf("%c", &tip);// Le o tipo de media a ser tirada
    res = media(n1,n2,n3,tip); // Variavel para receber o retorno da funcao, funcao esta enviado as notas e o tipo de media
    printf("Media: %.2f \n ", res); // Impressao do resultado
    return 0;
}



