#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "jogo_da_velha.h"
#include "i_o.h"
#include "bot_easy.h"
#include "human.h"
int vetor_posicao[9];
int main()
{
	int jogada,modo_de_jogo,i;
	int matriz[3][3] ={{'1','2','3'},
			    {'4','5','6'},
			    {'7','8','9',}};
			    
	char mprint[3][3]={{'1', '2', '3'},
                           {'4', '5', '6'},
                           {'7', '8', '9'}};	




	modo_de_jogo=show_menu();
	if(modo_de_jogo==4) 
	{
		saida(11,0);	
		return 0;
	}
	saida(3,0);
	mostra_matriz(matriz,mprint);

	for(i=1;i<=9;i++)
	{
		if(modo_de_jogo == 1 || i%2!=0)//multiplayer ou quando é a vez do jogador um(humano)
		{
			jogada=jogada_correta(vetor_posicao,i);//pedindo jogada do USUARIO 			
		}		
		else 
		{
		
			if(modo_de_jogo==2)//facil 
			{				
				jogada=play_easy_bot(vetor_posicao);//MAQUINA JOGA FACIL				
							
			}
			else
			{
				//jogada=jogada_dificil;MAQUINA JOGA DIFICIL
			}
			saida(12,jogada);//maquina fala onde jogou
		}			
		play(matriz,vetor_posicao,i,modo_de_jogo,jogada);
		
		saida(3,0);
		mostra_matriz(matriz,mprint);
		
		if(ganhou(matriz))
		{
		     if(i%2==0)// se i é par é o '0'
		     {
		     	saida(7,0);		     
		     }
		     else// se i é impar é o 'X'
		     {
		     	saida(8,0);
		     }       
			break;
		}
			// verifica se velhou
		if(i==9)
		{
			saida(9,0);
			break;
		}
	}
	
    return 0;
}
