/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 4
 * lista2.05.c
 *
 * Equipe:
 *
 *          Davi Tavares
 *          Delrick Oliveira
 *          Evandro Fernandes
 *          Lucas Frota
 *          Manoel Victor
 */

#include<stdio.h>
#include <stdlib.h>
#include "function.h"

int main(int argc, const char *argv[])
{
    int n, i; //n - numero de pontos, i - contador
    float x, y, *A, *B, *d; //x - abscissa central, y - ordenada central, A - vetor de abscissas, B - vetor de ordenadas
                            //d - vetor de distancias
                            
    printf("Informe o valor de x:\n");
    scanf("%f", &x); //lê valor para 'x'
    printf("Informe o valor de y:\n");
    scanf("%f", &y); //lê valor para 'y'

    printf("Informe o valor de n:\n");
    scanf("%d", &n); //lê valor para 'n'

    verificaN(&n); //verifica se o valor de 'n' está entre 1 e 100, se nao estiver entra em um loop até o usuario digitar
                   // um numero dentro deste intervalo
    
    A = malloc(sizeof(float) * n);
    B = malloc(sizeof(float) * n);
    d = malloc(sizeof(float) * n);

    ler_vetores(A, B, n); //lê valores para os vetores 'A' e 'B' de tamanho 'n'

    geraD(d, A, B, x, y, n); //gera o vetor de distancias

    elimina(d, n); //ordena o vetor 'd' e elimina os valores repetidos. 

    printD(d, n); //mostra o vetor de distancias
    
    return 0;
}
