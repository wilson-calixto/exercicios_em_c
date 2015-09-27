/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 4
 * f4.11.b.c
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
        for(j=0;j<n;j++)// acesso a posição da coluna da matriz
        {
            if(j==0)
            {
                printf ( "insira o dia da data %d \n",i+1 );
            }
            if(j==1)
            {
                printf ( "insira o mes da data %d \n",i+1 );
            }
            if(j==2)
            {
                printf ( "insira o ano da data %d\n",i+1 );
            }
            scanf( "%d", &mat[i][j]); // inserção do usuario na posição [linha][coluna] da matriz 
        }
    }
}


void print_matrix(int m, int n, int **mat)// função que imprime a matriz , funciona de modo semelhante a funcao read_matrix
{
    int i, j;
    printf ( "imprimindo datas \n" );
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf ( "%d\t",mat[i][j] );
        }
        printf ( "\n" );
    }
}

void ord_date(int **mat, int linha , int coluna)
{
    int i,j,k=0,c=2,p,count=0,campo=1; //função que ordena data , funciona utilizando a função de ordenar coluna, k é o intervalo de linha inicial, p o intervalo final, c a coluna (o campo) a ser ordenada, um contador para auxiliar, campo seria um contador para ir transitando entre os campos presentes na matriz , ele irá subtrair o numero de colunas para acessar o campo
    p=linha-1; // p recebe o numero de linhas digitados pelo usuario menos um 
    ord_coluna(k,p,c,mat,coluna); // ordeno a coluna de acordo com as atribuições que fiz nas variaveis para ordenar primeiro a ultima coluna da matriz  
    c-=1;// a cada ordenação de coluna decrementa o c até chegar na primeira
    for(j=0;j<coluna;j++)// iteração para transitar entre as colunas 
    {
 
        for(i=0;i<linha-1;i++)
        {
            if(mat[i][coluna-campo] == mat[i+1][coluna-campo]) // se houver uma igualdade....
            {   
                if(count==0)// se o contador for igual a 0 , ou seja  se não houver nenhuma igualdade com uma casa anterior adjacente....
                {
                    k=i; // k recebe o i caso a condição seja verdadeira 
                }
                count++;// contador incrementa a cada igualdade para contar o intervalo 
            }
            else
            {
                p=k+count; // p recebe k + o intervalo de igualdades , caso não haja o p seŕa igual ao k (pois o contador será 0)
                if(k!=p) // se houver igualdades ou seja se o intervalo inicial for maior que o final 
                {  
                    ord_coluna(k,p,c,mat,coluna); // ordeno a coluna novamente 
                    count=0;// reseto o contador para so incrementar novamente quando achar outra igualdade
                }
            }
        }   
        campo++; // recebe um incremento para a subtração com o total de coluna fazer mudar para uma coluna anterior , ou seja , outro campo
        c-=1; // a coluna escolhida para fazer a alteração , ou seja , uma coluna antes da coluna que e verificado o campo da igualdade ( se o campo fizer a verificação parar no mes , o c irá modificar o dia ;
    }
 }

