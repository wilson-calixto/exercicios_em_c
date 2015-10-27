#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bot_easy.h"
#include "human.h"
#include "i_o.h"
#include "jogo_da_velha.h"

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
	saida(3); //limpa a tela
	mostra_matriz(matriz,mprint);

	for(i=1;i<=9;i++)
	{
		if(modo_de_jogo == 1 || i%2!=0)//se é multiplayer ou se a vez é do humano
		{
			jogada=jogada_correta(vetor_posicao,i);//pedindo jogada do USUARIO (humano) 			
		}		
		else 
		{
			if(modo_de_jogo==2)//se a vez é da maquina nivel facil 
			{				
				jogada=play_easy_bot(vetor_posicao);//MAQUINA JOGA FACIL
			}
			else//se a vez é da maquina nivel facil DIFICIL
			{
				//jogada=jogada_dificil;MAQUINA JOGA no  nivel DIFICIL
			}
			printf("joguei no %d",jogada);//mostra onde a maquina jogou
			
		}			
		play(matriz,vetor_posicao,i,modo_de_jogo,jogada);
		
		saida(3); // limpa a tela
		mostra_matriz(matriz,mprint);
		
		if(ganhou(matriz))
		{
		     if(i%2==0)// se i é par é o '0'
		     {
		     	saida(7); // Jogador 2 o 'O' ganhou		     
		     }
		     else// se i é impar é o 'X'
		     {
		     	saida(8); // Jogador 1 o 'X' ganhou
		     }       
			break;
		}
			// verifica se velhou
		if(i==9)
		{
			saida(9); // Velhou
			break;
		}
	}
	
    return 0;
}
