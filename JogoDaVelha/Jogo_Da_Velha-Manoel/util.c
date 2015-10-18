#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define limpa_tela() system("/usr/bin/clear")

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

void hXh(Jogador *jogador, char *vetor)
{
 
    while(!velhou() && !ganhou(vetor,*jogador))
    {
        limpa_tela();
        troca(&*jogador);//troca valores da variável 'jogador'
        mostra(vetor);//mostra o vetor 
        printf("Turno do jogador %d.\n", (*jogador).num); //informa de quem é a vez
        pede_jogada(vetor,*jogador);//pede que o jogador jogue
    }
 
    putchar('\n'); //pula uma linha
    
    limpa_tela();

    mostra(vetor); //mostra o vetor no fim do jogo

}

void sleep(time_t delay)//função para dar um atraso no programa
{
    time_t timer0, timer1;
    time(&timer0);//recebe a primeira hora em segundos
    do
    {
        time(&timer1);//recebe a hora em segundos até que se passa 'delay' segundos
    }while((timer1 - timer0) < delay);
}

void maquina_joga(char *vetor, Jogador jogador)
{

    srand(time(NULL));//declara função rand()

    int pos, valido=0;//posição, booleano valido;

    sleep(2);//espera 2 segundos para realizar o próximo comando

    while(!valido)
    {
           
        pos = rand()%9 + 1;//'pos' recebe um valor randômico (de 0 até 8) + 1

        if(vetor[pos-1]-48 >= 1 && vetor[pos-1]-48 <= 9)
        {
            vetor[pos-1] = jogador.marca;//vetor na posiçao pos - 1 recebe a marca do jogador
            valido = 1; //valido vira 'true'
            jogadas--; //variável 'jogadas' é decrementada
        }
    }
}

void hXm(Jogador *jogador, char *vetor)
{

    while(!velhou() && !ganhou(vetor,*jogador))
    {
        limpa_tela();
        troca(&*jogador); //troca de jogador
        mostra(vetor);//mostra o vetor
        printf("Turno do jogador %d\n",(*jogador).num);//informa de quem é o turno
        if((*jogador).num == jogador1.num)
            pede_jogada(vetor,*jogador);//se jogador for a o usuário então pede a jogada
        else
            maquina_joga(vetor,*jogador);//se for a maquina, a maquina joga 
    }

    putchar('\n');//pula uma linha

    limpa_tela();

    mostra(vetor);//mostra o vetor no fim do jogo
}
