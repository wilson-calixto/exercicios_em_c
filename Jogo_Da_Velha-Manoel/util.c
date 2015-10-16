#include <stdio.h>

typedef struct jogador
{
    int num, marca;
}Jogador;

int jogadas = 9;

const Jogador jogador1 = {1, 88}, jogador2 = {2, 79};

void cria_vetor(char *vetor)
{
    int i;

    for(i = 0; i < 9; i++)
    {
        vetor[i] = (char) (i+49);
    }
}

void mostra(char *vetor)
{
    int i;

    for(i = 0; i < 9; i++)
    {
        printf("%c ", vetor[i]);

        if((i+1) % 3 != 0)
            printf(" | ");

        if((1+i) % 3 == 0)
            puts("\n------------");
    }
}

void pede_jogada(char *vetor, Jogador jogador)
{
    int pos, valido=0;

    while(!valido)
    {
        printf("Informe uma posição:\n");
        scanf("%d", &pos);
 
        if(pos >= 1 && pos <= 9)
            if(vetor[pos-1]-48 >= 1 && vetor[pos-1]-48 <= 9)
            {
                vetor[pos-1] = jogador.marca;
                valido = 1;
                jogadas--;
            }
            else
                printf("Posiçao informada já foi utilizada.\n");
        else
            printf("Posição inválida.\n");
    }
}

void troca(Jogador *jogador)
{
    if((*jogador).num == jogador1.num)
        *jogador = jogador2;
    else
        *jogador = jogador1;
}

int velhou()
{
    if(jogadas)
        return 0;
    else
        return 1;
}

int ganhou(char *vetor, Jogador jogador)
{
    if(!velhou())
        if((vetor[0] == jogador.marca && vetor[1] == jogador.marca && vetor[2] == jogador.marca) || (vetor[3] == jogador.marca && vetor[4] == jogador.marca && vetor[5] == jogador.marca)|| (vetor[6] == jogador.marca && vetor[7] == jogador.marca && vetor[8] == jogador.marca) ||(vetor[0] == jogador.marca && vetor[3] == jogador.marca && vetor[6] == jogador.marca) || (vetor[1] == jogador.marca && vetor[4] == jogador.marca && vetor[7] == jogador.marca) ||(vetor[0] == jogador.marca && vetor[4] == jogador.marca && vetor[8] == jogador.marca) || (vetor[2] == jogador.marca && vetor[4] == jogador.marca && vetor[6] == jogador.marca)|| (vetor[2] == jogador.marca && vetor[5] == jogador.marca && vetor[8] == jogador.marca))
            return 1;
        else
            return 0;
    
    return 0;
}

