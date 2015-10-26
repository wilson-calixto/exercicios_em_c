
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "jogo_da_velha.h"
int vetor_posicao[9];
int main()
{
	int resposta,i;
	int matriz[3][3] ={{'1','2','3'},
			    {'4','5','6'},
			    {'7','8','9',}};
			    
	char mprint[3][3]={{'1', '2', '3'},
                           {'4', '5', '6'},
                           {'7', '8', '9'}};
		
		
	 resposta=show_menu();
	//mostra_matriz(matriz);
	
		for(i=0;i<1;i++)
		{

		   	switch(resposta)
			{
			case 1: para_um_facil(matriz,vetor_posicao, mprint);// para um facil
					  break;        
			case 2: para_um_dificil(matriz,vetor_posicao, mprint);// para um dificil
					  break;        
			case 3: printf("\nsaindo\n");
					break;
			case 4: para_dois(matriz,vetor_posicao, mprint);// para um facil
					break;
			}
		
		}
	
	
    return 0;
}
