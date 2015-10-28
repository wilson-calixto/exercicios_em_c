#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "jogo_da_velha.h"
#include "i_o.h"
#include "bot_easy.h"
#include "human.h"
#define singleplayer_hard 3
#define multiplayer 1
#define singleplayer_easy 2
#define exit 4
#define max_jogadas 9

int vetor_posicao[9];
int main()
{
	int jogada,modo_de_jogo,i;
	int matriz[LINHA][COLUNA] ={{1,2,3},
			    	   {4,5,6},
			           {7,8,9}};
			    
	char mprint[3][3]={{'1','2','3'},
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
