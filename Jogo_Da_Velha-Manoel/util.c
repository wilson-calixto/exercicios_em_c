#include <stdio.h>

typedef struct jogador
{
    int num, marca;
}Jogador; //declara estrutura 'Jogador' para conter o numero do jogador e a marca 'X' e 'O', respectivamente.

int jogadas = 9;//declara numeros de jogadas

const Jogador jogador1 = {1, 88}, jogador2 = {2, 79}; //inicia variáveis

void cria_vetor(char *vetor) //função para preencher o vetor com valores
{
    int i; //i - contador

    for(i = 0; i < 9; i++)
    {
        vetor[i] = (char) (i+49);//'1' é igual a 49 em decimal
    }
}

void mostra(char *vetor)//função para mostrar o vetor
{
    int i; // i - contador

    for(i = 0; i < 9; i++)
    {
        printf("%c ", vetor[i]); //mostra o elemento

        if((i+1) % 3 != 0) 
            printf(" | ");//tabela vertical

        if((1+i) % 3 == 0)
            puts("\n------------");//tabela horizontal
    }
}

void pede_jogada(char *vetor, Jogador jogador)//função para pedir jogada do jogador
{
    int pos, valido=0;//posição, booleano valido;

    while(!valido)
    {
        printf("Informe uma posição:\n");
        scanf("%d", &pos);//lê posição
 
        if(pos >= 1 && pos <= 9)
            if(vetor[pos-1]-48 >= 1 && vetor[pos-1]-48 <= 9) 
            {
                vetor[pos-1] = jogador.marca;//vetor na posiçao pos - 1 recebe a marca do jogador
                valido = 1; //valido vira 'true'
                jogadas--; //variável 'jogadas' é decrementada
            }
            else
                printf("Posiçao informada já foi utilizada.\n"); //caso a casa já esteja preenchida
        else
            printf("Posição inválida.\n"); //caso posição seja inválida
    }
}

void troca(Jogador *jogador)//função para alternar jogadores 
{
    if((*jogador).num == jogador1.num)
        *jogador = jogador2;
    else
        *jogador = jogador1;
}

int velhou()//função para verificar se velhou.
{
    if(jogadas)
        return 0;
    else
        return 1;
}

int ganhou(char *vetor, Jogador jogador)//função para verificar se algum jogador ganhou.
{
    if(!velhou())
        if((vetor[0] == jogador.marca && vetor[1] == jogador.marca && vetor[2] == jogador.marca) || (vetor[3] == jogador.marca && vetor[4] == jogador.marca && vetor[5] == jogador.marca)|| (vetor[6] == jogador.marca && vetor[7] == jogador.marca && vetor[8] == jogador.marca) ||(vetor[0] == jogador.marca && vetor[3] == jogador.marca && vetor[6] == jogador.marca) || (vetor[1] == jogador.marca && vetor[4] == jogador.marca && vetor[7] == jogador.marca) ||(vetor[0] == jogador.marca && vetor[4] == jogador.marca && vetor[8] == jogador.marca) || (vetor[2] == jogador.marca && vetor[4] == jogador.marca && vetor[6] == jogador.marca)|| (vetor[2] == jogador.marca && vetor[5] == jogador.marca && vetor[8] == jogador.marca))
            return 1;      //^-todas as possibilidades de vitórias 
        else
            return 0;
    
    return 0;
}
