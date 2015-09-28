#include<stdio.h>
#include<stdlib.h>

void read_matrix(int **mat , int m,  int n)// função que faz a leitura da matriz (vetor de vetores)
{
    int  i,j;
    for(i=0;i<m;i++)//acesso a posição de linha da matriz(vetores) 
    {
        for(j=0;j<=n;j++)// acesso a posição da coluna da matriz
        {
            if(j==0)
            {
                printf ( "insira o tamanho do vetor %d \n",i+1 );
                scanf( "%d", &mat[i][j]); // inserção do usuario na posição [linha][coluna] da matriz (elementos dos vetores)
                n = mat[i][j];// n recebe o primeiro elemento ou seja a quantidade de elementos que vai ter nesse vetor, e como ele esta na iteração, ele delimita essa quantidade de acordo com o que e lido
            }
            else
            {
                printf ( "insira o elemento %d do vetor %d\n",j,i+1 );
                scanf( "%d", &mat[i][j]);
            }
        }
    }
}


void print_matrix(int m, int n, int **mat)// função que imprime a matriz , funciona de modo semelhante a funcao read_matrix
{
    int i, j;
    printf ( "imprimindo vetores \n" );
    for(i=0;i<m;i++)
    {
        for(j=0;j<=mat[i][0];j++)// logica semelhante a de cima, ele so imprime ate a quantidade de elementos do vetor 
        {
            printf ( "%d\t",mat[i][j] );
        }
        printf ( "\n" );
    }
}

void inter_vet(int **mat,int n)// função que verifica a interseção dos vetores 
{
    int i=0,j,k,l, key, count,indice=0 ;
    for(j=1;j<=mat[i][0];j++)//transição entre as casas do primeiro vetor
    {   
        count=0; //contador resetado a cada iteração
        for(k=1;k<n;k++) //percorrendo os outros vetores que não são os primeiros
        {   key=0;//chave para verificação de elementos iguais no vetor
            for(l=1;l<=mat[k][0];l++) // elemento l do vetor k
            {   
                if(mat[i][j]==mat[k][l]) // comparação dos elementos do primeiro vetor com os outros vetores , ele percorrer o vetor e achar uma igualdade a chave e alterada pra 1 
                {
                    key=1; 
                }
            }
            if(key==1) // se houver um elemento igual o contador incrementa
            {
                count+=1;
            }    
        }
        if(count==n-1) // se o contador for igual a quantidade de vetores menos o primeiro ...
        {   
            indice+=1; //indice acumula mais 1 
            mat[n][indice]=mat[i][j]; // o indice e usado como o propio nome diz para fazer atribuição na casa daquele valor 
        }
    }
    mat[n][0]=indice;// o indice tambem e usado para indicar a quantidade de elementos do vetor interseção , pois como a casa 0 e ocupada para indicar a quantidade, o tanto de elementos fica igual a ultima casa desse vetor 
    printf ( "imprimindo interseção\n" );
    for(i=0;i<=indice;i++)
    {
        printf ( "%d\t",mat[n][i]);// imprimindo o vetor interseção
    }
}

