#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//definindo tamanho da matriz 10x10
#define TAM 10

int main()
{
    int matriz[TAM][TAM],a;
    int linha, coluna;

    //valor da matriz vai ser sempre alterada a acada execução
    srand(time(NULL));
    //escrevendo na Matriz
    //matriz começa no ponto [0][0]
    for(linha = 0 ; linha < TAM ; linha++)
    {
        for(coluna = 0 ; coluna < TAM ; coluna++)
        {
            a=rand() %2;
            //matriz recebe um numero randomico em cada linha e coluna
            matriz[linha][coluna]=a;
        }
    }
    // imprimindo a matriz na tela
    for(linha = 0 ; linha < TAM ; linha++)
    {
        for(coluna = 0 ; coluna < TAM ; coluna++)
            printf("%d", matriz[linha][coluna]);

        printf("\n"); //após cada linha ser impressa, um salto de linha
    }
}
