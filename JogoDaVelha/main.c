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
		/* mostra a matriz inicial*/
	mostra_matriz(matriz);
	
    for(i=1;i<=9;i++)
    {       
	        /*retira as coordenadas invalidas e as que ja sairam*/
	     do{            
	            
	            if(i%2==0)// se i é par é o '0'
	            {
	            	printf("Digite a jogada jogador 2\n");
	            }
	            else// se i é impar é o 'X'
	            {
	            	printf("Digite a jogada jogador 1\n");
	            }
	            
	            scanf("%d",&jogada);
	      }while((jogada>9 || jogada<1)||!jogada_valida(vetor_posicao,jogada));
	        /*colocar um limpa tela*/     
	        

	      /*marca as jogadas ja feitas */
	      marca_jodada(jogada,i,vetor_posicao);
	          /* joga */ 	     
	      joga(jogada,matriz,i);		 
	     /* verifica se um jogador ganhou*/
	      if(ganhou(matriz))
	      {
		     if(i%2==0)// se i é par é o '0'
		     {
		     	printf("jogador 2 o 'O' ganhou");
		     	break;		     
		     }
		     else// se i é impar é o 'X'
		     {
		     	printf("jogador 1 o 'X' ganhou");
		     	break;		     
		     }	     
	      }
	     /* verifica se velhou*/
	     if(velhou(i))
	     {
	     		printf("\nVelhou\n");
	     }
	     	/* mostra a matriz modificada*/
	     mostra_matriz(matriz);
    
	}
    return 0;
}
