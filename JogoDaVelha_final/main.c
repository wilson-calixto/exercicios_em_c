
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "jogo_da_velha.h"
#include "i_o.h"

#ifdef WIN32  //se for windows
  #define limpa_tela system("cls") //limpa tela
#else //senão, ex.: linux
  #define limpa_tela system("/usr/bin/clear") //limpa tela
#endif

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
	
	saida(11,matriz,mprint);//trocar os prints por essa funcao


	modo_de_jogo=show_menu();
	limpa_tela;
	mostra_matriz(matriz,mprint);

	for(i=1;i<=9;i++)
	{
		if(modo_de_jogo == 1)//multiplayer
		{
			jogada=jogada_correta(vetor_posicao,i);//pedindo jogada do USUARIO 			
		}		
		else 
		{
			if(i%2==0)//pedindo jogada
			{
				if(modo_de_jogo==2)//facil 
				{				
					jogada=play_easy_bot(vetor_posicao);//MAQUINA JOGA FACIL
					
					printf("joguei no %d",jogada);
					
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
		}			
		play(matriz,vetor_posicao,i,modo_de_jogo,jogada);
		
		limpa_tela;
		mostra_matriz(matriz,mprint);//deve ser substituido por saida(3,matriz,mprint);
		
		if(ganhou(matriz))
		{
		     if(i%2==0)// se i é par é o '0'
		     {
		     	saida(7,matriz,mprint);		     
		     }
		     else// se i é impar é o 'X'
		     {
		     	saida(8,matriz,mprint);
		     }       
			break;
		}
			// verifica se velhou
		if(i==9)
		{
			saida(9,matriz,mprint);;
			break;
		}
	}
	
    return 0;
}
