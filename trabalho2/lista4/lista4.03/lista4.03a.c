/*
 * Programacao de Computadores e Algoritmos
 * Trabalho 2
 * Lista 4 - Questão 3.a)
 *
 * Equipe:
 *
 *          Dreka
 *          Elisabeth
 *          Julianny
 *          Luana
 *          Wilson 
 */

#include<stdio.h>
#include"bloco.h"   //faz a ligação com a funçao 'bloco'

int main (int argc, const char *argv[]) //programa que vai fazer a comunição com o usuário
{
    int valor;  //declaração da variável que vai receber o valor digitado pelo usuário
    
    printf("Informe N números:\n");
    scanf("%d", &valor);

    printf("\n\n%d\n\n", bloco(valor)); //imprime o resultado recebido da função 'bloco'

    return 0;
}
