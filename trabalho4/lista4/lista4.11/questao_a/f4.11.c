/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 4
 * function.c
 *
 * Equipe:
 *
 *          Delrick Oliveira
 *          Manoel Florencio
 *          Evandro Fernandes
 *          Davi Tavares 
 *          Lucas Frota
 *          
 *           
 */

#include<stdio.h>
#include<stdlib.h>


void ord_coluna( int lini, int linf , int col, int **a, int colunas) // função que ordena o vetor de acordo com a coluna e o intervalo de linhas 
{
    int i, j , k , aux=0 ;
    
    if(lini>linf) // faço a troca caso o primeiro valor do intervalo seja maior do que o intervalo final 
    {
        aux = lini;
        lini = linf;
        linf = aux;
    }

    for(i=lini; i<linf ;i++)
    {
        for(j=i+1;j<=linf;j++)   // faço o sort na coluna para ordenar no intervalo 
        {
            if((a[i][col]) > (a[j][col])) 
            {
                aux = a[i][col];
                a[i][col] = a[j][col];
                a[j][col] = aux;
                
                for(k=0; k<colunas ;k++) // se for feita alguma alteração na coluna pedida , tbm é feita a mesma troca de posições nas outras colunas
                {
                    if(k!=col)
                    {
                        aux = a[i][k];
                        a[i][k] = a[j][k];
                        a[j][k] = aux;
                    }
                }
                
            }

        }
    }
}


void read_matrix(int **mat , int m,  int n)// função que faz a leitura da matriz 
{
    int  i,j;
    for(i=0;i<m;i++)//acesso a posição de linha da matriz 
    {
        for(j=0;j<n;j++)
        {
            printf( "lendo posição |%d|%d|\t", i+1, j+1 );// acesso a posição da coluna da matriz
            scanf( "%d", &mat[i][j]); // inserção do usuario na posição [linha][coluna] da matriz 
        }
    }
}


void print_matrix(int m, int n, int **mat)// função que imprime a matriz , funciona de modo semelhante a funcao read_matrix
{
    int i, j;
    printf ( "imprimindo matriz...\n" );
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf ( "%d\t",mat[i][j] );
        }
        printf ( "\n" );
    };
}

