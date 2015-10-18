/*
 * Programacao de Computadores e Algoritmos
 * Jogo da Velha
 *
 * Equipe:
 *
 *          Manoel Victor
 *          Paulo Marinho
 *          Wilson Neto
 */

#include <stdio.h>
#include <stdlib.h>
#include "util.h"

#define limpa_tela() system("/usr/bin/clear")

extern const Jogador jogador1, jogador2; //Usando variáveis globais entre arquivos

int main(int argc, const char *argv[])
{
   
   limpa_tela();//limpa a tela
   
    char vetor[9]; //declara vetor de 9 elementos
    Jogador jogador; //declara variável do tipo Jogador
    int op = 0;

    jogador = jogador2; //'jogador' é iniciada

    cria_vetor(vetor);//preenche vetor com os valores de 1 a 9 em decimal
 
    printf("Voce deseja jogar com 1 ou 2 jogadores?\n"); 
    scanf("%d",&op); //recebe a quantidade de jogadores

    switch(op)
    {
        case 2:
            hXh(&jogador,vetor);
            break;
        
        case 1:
            hXm(&jogador,vetor);
            break;
        
        default:
            printf("Opção invalida.\n");
            break;
    }

    if(ganhou(vetor, jogador))
        printf("Jogador %d ganhou!\n", jogador.num);
    if(velhou())
        printf("Velhou!\n");

    return 0;
}
