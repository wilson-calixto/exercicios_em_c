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

extern const Jogador jogador1, jogador2; //Usando variáveis globais entre arquivos

int main(int argc, const char *argv[])
{
    char vetor[9]; //declara vetor de 9 elementos
    Jogador jogador; //declara variável do tipo Jogador

    jogador = jogador2; //'jogador' é iniciada

    cria_vetor(vetor);//preenche vetor com os valores de 1 a 9 em decimal
    
    while(!velhou() && !ganhou(vetor,jogador))
    {
        troca(&jogador);//troca valores da variável 'jogador'
        mostra(vetor);//mostra o vetor 
        printf("Turno do jogador %d.\n", jogador.num); //informa de quem é a vez
        pede_jogada(vetor,jogador);//pede que o jogador jogue
    }
 
    putchar('\n'); //pula uma linha

    if(ganhou(vetor,jogador))
        printf("Jogador %d ganhou!\n",jogador.num);
    if(velhou())
        printf("Velhou!\n");
    
    mostra(vetor); //mostra o vetor final

    return 0;
}
