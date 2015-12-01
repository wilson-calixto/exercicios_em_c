#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// defines de modo de jogo
#define HARD 3
#define EASY 2
#define MULTIPLAYER 1
#define SINGLEPLAYER 2
#define EXIT 4
#define MAX_JOGADAS 9
#define TAMANHO 3
// defines de impressão
#define LIMPA_TELA 3
#define ONDE_JOGOU 12
#define PLAYER1_GANHOU 8
#define PLAYER2_GANHOU 7
#define VELHOU 9
#define MENSAGEM_SAIDA 11
#define LINHA 3
#define COLUNA 3
#define PRINT_NULO 0

#ifdef WIN32  //se for windows
  #define limpa_tela system("cls") //limpa tela
#else //senão, ex.: linux
  #define limpa_tela system("/usr/bin/clear") //limpa tela
#endif

//A função retorna a saidas, que correspondem ao numero do parametro de entrada "CONTROLE" caso seja 12 ele mostra o parametro saida

// Programador: Wilson Oliveira Neto.
void saida(int controle,int saida)
{
    switch(controle)
    {
        case 1: printf("\nImpossivel abrir o arquivo.\n\n");
                break;
        case 2: printf("Informe o codigo do contato: ");
                break;
        
        case 3: limpa_tela;
                break;
        case 4: printf("---------------------------------------------------------\n");
                break;
        case 5: puts("Digite o codigo do contato a ser modificado:"); 
                break;
        case 6: puts("Informe o nome do contato:");
                break;
        case 7: puts("Informe o endereco do contato:");
                break;
        case 8: printf("Digite o codigo do usuario a ser apagado no arquivo: "); 
                break;
        case 9:  printf("Operacao invalida.\n");
                break;
        case 10: printf("\nInforme a operação que deseja realizar:\n 1 - Criar agenda por arquivo\n 2 - Listar contatos\n 3 - Editar contatos\n 4 - Apagar contatos\n 5 - Pesquisar contato\n 6 - Limpa agenda\n 9 - Sair\n\nOperação: ");
                break;
        
    }

}



int entrada()
{
    int jogs=0;
    
    scanf("%d", &jogs);
    
    return jogs;
}

