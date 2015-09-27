/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 4
 * mainq4.11.c
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
#include "f4.11.h"

int main(int argc, const char argv[])
{
	int linha, coluna, **a, c , k, p,i;
    printf ( "digite o tamanho de linhas:\n" );
    scanf ( "%d", &linha ); // leitura do valor de linhas
    printf ( "digite o tamanho de colunas\n" );
    scanf ( "%d", &coluna ); // leitura do valor de colunas
    a = (int**) (malloc(linha* sizeof(int*))); // alocação do tamanho da matriz na memoria 
    for(i=0;i<linha;i++)
    {
        a[i] = (int*)(malloc(coluna*sizeof(int)));
    }
    printf ( " lendo matriz\n" );
    read_matrix(a, linha, coluna); // função de leitura 
    printf ( "matriz antes da modificação\n" );
    print_matrix(linha,coluna,a);// função que imprime 

	printf ( "digite qual coluna deseja ordenar(de 0(=1) a %d(=%d)):\n", coluna-1,coluna );
    scanf ( "%d", &c );
    if(c<0 || c>coluna-1)// leitura do valor da coluna a ordenar 
    {
        printf ( "valor de coluna inválido\n" );
        free(a);
        a=NULL;
        return 0;
    }


    printf ( "digite quais linhas vc deseja ordenar intervalo (de 0(=1) a %d(=%d))\n", linha-1,linha );
    scanf ( "%d", &k );// leitura do primeiro valor do intervalo a ordenar 
    if(k>0 || k>linha-1)// verificando validade do valor , verificaçoes semelhantes embaixo
    {
        printf ( "valor de intervalo de linha inválido\n" );
        free(a);
        a=NULL;
        return 0;
    }


    printf ( "primeiro valor do intervalo inserido...\n" );
    scanf ( "%d", &p );// leitura do segundo valor do intervalo a ordenar 
    if(p<0 || p>linha-1)
    {
        printf ( "valor de intervalo de linha inválido\n" );
        free(a);
        a=NULL;
        return 0;
    }
    printf ( "segundo valor do intervalo inserido...\n" );

    ord_coluna(k,p,c,a,coluna);// ordenando a coluna e trocando as posições das outras colunas de acordo com a coluna ordenada 
    
    printf ( "matriz após a troca\n" );
    print_matrix(linha, coluna, a);// imprimindo a matriz resultante
    
    free(a);//liberando a matriz "a"
    a=NULL;//preenchendo o ponteiro de ponteiro com vazio 

	return 0; 


}




