/*
 *Programaçao de Computadores e Algoritmos
 *Trabalho 4
 *Questão 01 da Lista 04 letra b
 *Grupo:
 *	Davi Tavares;
 *	Delrick Oliveira;
 *	Evandro Fernandes;
 *	Lucas Frota;
 *	Manoel Victor;
 */

#include<stdio.h>
#include<stdlib.h>
#include"f4.1.b.h"

int main (int argc, const char *argv[])
{
    int **a, i, j, n, col=100;
    printf ( "digite a quantidade de vetores\n" );
    scanf ( "%d", &n );// leitura da quantidade de vetores
    a = (int**)(malloc(n+1*sizeof(int*))); // alocação de memoria com uma linha a mais, para guardar o vetor interseção
        for(i=0;i<n+1;i++)
        {
            a[i]= (int*)(malloc(col*sizeof(int)));// alocação de colunas com o tamanho max(100)
        }
    read_matrix(a, n, col); //leitura da matriz
    print_matrix(n, col, a);//imprimindo a matriz
    printf ( "calculando a interseção\n" );
    inter_vet(a,n);   // função que imprime a interseção dos vetores junto com a quantidade de elementos na primeira casa 
    return 0;
}



