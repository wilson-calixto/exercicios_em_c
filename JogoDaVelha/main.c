#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "jogo_da_velha.h"


int vetor_posicao[9];
int main()
{
    int i,jogada;
	char matriz[3][3] ={{'1','2','3'},
					   {'4','5','6'},
					   {'7','8','9',}};

    for(i=1;i<=9;i++)
    {
    	
    	 mostra_matriz(matriz);
         if(ganhou(matriz))
	     {
		     if(i%2==0)
		     {
		     	printf("jogador 1 o 'X' ganhou");
		     	break;		     
		     }
		     else
		     {
		     	printf("jogador 2 o 'O' ganhou");
		     	break;		     
		     }	     
	     }
	        /*retira as coordenadas invalidas e as que ja sairam*/
	    do{            
	            
	            if(i%2==0)
	            {
	            	printf("Digite a jogada jogador 2\n");
	            }
	            else
	            {
	            	printf("Digite a jogada jogador 1\n");
	            }
	            
	            scanf("%d",&jogada);
	     }while((jogada>9 || jogada<1)||!jogada_valida(vetor_posicao,jogada));
	        /*colocar um limpa tela*/     
	        

	     /*converte um numero em um endereco*/
	     marca_jodada(jogada,i,vetor_posicao);
	          /* joga */ 	     
	     joga(jogada,matriz,i);		 
	     
	}
    return 0;
}
