/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 2
 * q4.11.b.c
 *
 * Equipe:
 *
 *          Delrick Oliveira
 *          Manoel Florencio
 *          Evandro Fernandes
 *          Davi Tavares 
 *          
 *           
 */

#include<stdio.h>
#include<stdlib.h>
#include"f4.11.b.h"

int main(int argc, const char argv[])
{
    int **a, linha, coluna=3,i;
    printf ( "digite o numero de datas a inserir:\n" );//inserindo o numero de datas 
    scanf ( "%d", &linha ); // fazendo a leitura do total de datas 

    a = (int**)(malloc(linha*sizeof(int*))); // fazendo a alocação no algoritmo principal
    for(i=0;i<linha;i++)
    {
        a[i] =(int*)(malloc(coluna*sizeof(int)));
    }
    
    read_matrix(a,linha,coluna); // lendo os valores da matriz 
    printf ( "imprimindo datas antes da ordenação\n" );
    print_matrix(linha, coluna, a);// imprimindo antes da modificação 
    printf ( "ordenando a coluna....\n" );
    ord_date(a,linha,coluna); // ordenando as datas 
    printf("matrix apos ordenação\n" ); 
    print_matrix(linha,coluna,a);// imprimindo o restultado na tela 
    
	return 0;
}


