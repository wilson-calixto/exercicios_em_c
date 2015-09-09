/*
 * Programacao de Computadores e Algoritmos
 * Trabalho 2
 * Lista 4 - Questão 3.b)
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
#include"bloco_b.h"

int main (int argc, const char *argv[])     //programa principal que vai fazer a interação com o usuário
{
    int quantidade;     //declaração da variável que vai receber o valor de 'n'

    printf("Informe N:\n");
    scanf("%d", &quantidade);

    bloco_b(quantidade);    //chama a função bloco.b que faz todo o trabalho de verificação

 //   return 0;
}
