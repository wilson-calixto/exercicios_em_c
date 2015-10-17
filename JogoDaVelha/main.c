#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "jogo_da_velha.h"

int vetor_de_endereco[17];
int vetor_posicao[17];
int main()
{
    int i,jogada;
	char matriz[3][4] ={{'1','2','3'},
					   {'4','5','6'},
					   {'7','8','9',}};

    for(i=1;i<=9;i++){
    
	    mostra_matriz(matriz);
	    /*retira as coordenadas invalidas*/
	    do{            
	            printf("Digite a jogada ");
	            scanf("%d",&jogada);
	     }while(jogada>9 || jogada<1);
	        /*colocar um limpa tela*/
	        
	     
	         /*se a jogada ja existir no vetor peca denovo (retira as coordenadadas ja usadas) */
	     while(!jogada_valida(vetor_de_posicao,jogada))
	     {            
	            printf("Digite a jogada jogador 2");
	            scanf("%d",&jogada);
	     }
	     /* colocar limpa tela*/
	     
	     /*converte um numero em um endereco*/
	     converte_jogada(jogada);
	     
	     /* joga e verifica se alguem ganhou*/
	     if(i%2==0) /*se par o jogador é o 1==O se impar é 2==X */
 	     {
		       joga(*vetor_de_endereco,**matriz,i)
		       if(ganhou(matriz))
		       {
		       	printf("jogador 1 ganhou ");
		       } 	     
  	     else
	     {
		       joga(*vetor_de_endereco,**matriz,i)
		       if(ganhou(matriz))
		       {
		       	printf("jogador 2 ganhou ");
		       }
	      }
	}
    return 0;
}
