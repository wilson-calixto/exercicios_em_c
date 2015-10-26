
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "jogo_da_velha.h"
int vetor_posicao[9];
int main()
{
	int modo_de_jogo,i;
	int matriz[3][3] ={{'1','2','3'},
			    {'4','5','6'},
			    {'7','8','9',}};
			    
	char mprint[3][3]={{'1', '2', '3'},
                           {'4', '5', '6'},
                           {'7', '8', '9'}};
		
		
	modo_de_jogo=show_menu();
	for(i=1;i=<9;i++)
	{
		if(modo_de_jogo == 1)//multiplayer
		{
			jogada=jogada_correta(vetor_posicao,i);//pedindo jogada do USUARIO 			
		{		
		else 
		{
			if(i%2==0)//pedindo jogada
			{
				if(modo_de_jogo==2)//facil 
				{				
					jogada=play_easy_bot(vetor_posicao);//MAQUINA JOGA FACIL
				}
				else
				{
					//jogada=jogada_dificil;MAQUINA JOGA DIFICIL
				}
			}
			else
			{
				jogada=jogada_correta(vetor_posicao,i);//pedindo jogada do USUARIO
			}			
		play(matriz,vetor_posicao,i,modo_de_jogo,jogada);
	}
	
	
    return 0;
}
