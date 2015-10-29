#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "jogo_da_velha.h"
#include "i_o.h"
#include "bot_easy.h"
#include "human.h"
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

int vetor_posicao[9];
int main()
{
	int jogada,modo_de_jogo,i;
	int matriz[LINHA][COLUNA] ={{1,2,3},
			    	   {4,5,6},
			           {7,8,9}};
			    
	char mprint[LINHA][COLUNA]={{'1','2','3'},
                       		    {'4','5','6'},
                       		    {'7','8','9'}};	

	modo_de_jogo=show_menu();
	if(modo_de_jogo==exit) //SE FOR 4 ELE FINALIZA
	{
		saida(11,0);	
		return 0;
	}
	saida(3,0);//LIMPA A TELA
	mostra_matriz(matriz,mprint);

	for(i=1;i<=max_jogadas;i++)
	{
		if(modo_de_jogo == multiplayer || i%2!=0)// SE FOR MULTPLAYER OU SE O JOGADOR FOR HUMANO
		{
			jogada=jogada_correta(vetor_posicao,i);//PEDINDO JOGADA DO USUARIO 		
		}		
		else 
		{
		
			if(modo_de_jogo==singleplayer_easy)//NIVEL FACIL
			{				
				jogada=play_easy_bot(vetor_posicao);// A MAQUINA JOGA NO MODO FACIL											
			}
			else
			{
				jogada=movimento_bot(matriz);//MAQUINA JOGA NO MODO DIFICIL
			}
			saida(12,jogada);//MAQUINA MOSTRA ONDE JOGOU
		}			
		play(matriz,vetor_posicao,i,modo_de_jogo,jogada);//A JOGADA É REALIZADA
		
		saida(3,0);//LIMPA A TELA
		mostra_matriz(matriz,mprint);
		
		if(ganhou(matriz))
		{
		     if(i%2==0)// se i é par é o '0' QUE GANHOU
		     {
		     	saida(7,0);//MOSTRA QUEM GANHOU
		     }
		     else// se i é impar é o 'X' QUE GANHOU
		     {
		     	saida(8,0);//MOSTRA QUEM GANHOU
		     }       
			break;
		}
			// VERIFICA SE VELHOU
		if(i==max_jogadas)
		{
			saida(9,0);//MOSTRA VELHOU
			break;
		}
	}
	
    return 0;
}
