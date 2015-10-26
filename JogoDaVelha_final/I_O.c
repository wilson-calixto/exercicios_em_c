#include <stdio.h>


//A função retorna a saidas, que correspondem ao numero do parametro de entrada "saida"
//A matriz dada como entrada é pelo case 3, que agora é o antigo MOSTRA_MATRIZ.
// Programador: Wilson Oliveira Neto.
void saida(int saida, char matriz[3][3])
{
    switch(saida)
    {
        case 1: printf("******* JOGO DA VELHA *****\n\n1. 1 jogador\n2. 2 jogadores\n3. Sair*");
                break;
        case 2: printf("\nDificuldade: \n1. Facil\n2. Dificil\n");
                break;
        //CASE 3 AGORA É O NOVO MOSTRA_MATRIZ, quando quiser chamar é só chamar essa função e pedir o primeiro parametro é ele.
        case 3:  printf("   |   |\n %c | %c | %c\n___|___|___\n   |   |\n %c | %c | %c\n___|___|___\n   |   |\n %c | %c | %c\n   |   |\n",matriz[0][0],matriz[0][1],matriz[0][2],matriz[1][0],matriz[1][1],matriz[1][2],matriz[2][0],matriz[2][1],matriz[2][2]);
                break;
        case 4: printf("Digite a jogada jogador 2\n");
                break;
        case 5: printf("Digite a jogada jogador 1\n");
                break;
        case 6: printf("Posicao invalida! \n");
                break;
        case 7: printf("jogador 2 o 'O' ganhou\n");
                break;
        case 8: printf("jogador 1 o 'X' ganhou\n");
                break;
        case 9: printf("\nVelhou\n");
                break;
        case 10: printf("O");
                break;
        case 11: printf("X");
                break;

    }

}

//A função pega a entrada de dados, serão processados em uma outra função.
// Programador: Wilson Oliveira Neto.
void entrada(int entrada)
{
    int jogs=0;
    switch(entrada)
    {   
        case 1: scanf("%d", &jogs);
                break;
    }

}
