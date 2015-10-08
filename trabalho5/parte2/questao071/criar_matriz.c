
// FUNCAO PARA CRIAR A MATRIZ COM NUMEROS DE 0 A 1
//wilson-neto


#include <stdlib.h>
#include <time.h>
//definindo tamanho da matriz 10x10
#define TAM 10

void criar_matriz()
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
}
