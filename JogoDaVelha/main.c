#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "jogo_da_velha.h"

int vetor_de_endereco[17];
int vetor_posicao[17];
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
	        /*retira as coordenadas invalidas*/
	    do{            
	            printf("Digite a jogada ");
	            scanf("%d",&jogada);
	     }while(jogada>9 || jogada<1);
	        /*colocar um limpa tela*/     
	        
	         /*se a jogada ja existir no vetor peca denovo (retira as coordenadadas ja usadas) */
	     while(!jogada_valida(vetor_posicao,jogada))
	     {            
	            printf("Digite a jogada jogador 2");
	            scanf("%d",&jogada);
	     }
	     /* colocar limpa tela*/     
	     /*converte um numero em um endereco*/
	     marca_jodada(jogada,i,vetor_posicao);
	          /* joga */ 	     
	     joga(jogada,matriz,i);		 
	     
	}
    return 0;
}
