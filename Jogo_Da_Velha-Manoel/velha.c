/*
 * Programacao de Computadores e Algoritmos
 * Trabalho 5
 * teste2.c
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

extern const Jogador jogador1, jogador2;

int main(int argc, const char *argv[])
{
    char vetor[9];
    Jogador jogador;

    jogador = jogador2;

    cria_vetor(vetor);
    
    while(!velhou() && !ganhou(vetor,jogador))
    {
        troca(&jogador);
        mostra(vetor);
        printf("Turno do jogador %d.\n", jogador.num);
        pede_jogada(vetor,jogador);
    }
 
    putchar('\n');

    if(ganhou(vetor,jogador))
        printf("Jogador %d ganhou!\n",jogador.num);
    if(velhou())
        printf("Velhou!\n");
    
    mostra(vetor);

    return 0;
}
