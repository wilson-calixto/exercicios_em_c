#include <stdio.h>
#include "i_o.h"
/*retira as coordenadas invalidas e as que ja sairam e retorna uma jogada valida*/   
// programador : WISON CALIXTO
 int jogada_correta(int vetor_posicao[9],int i)
 {
 int jogada;
        do{            
	            if(i%2==0)// se i é par é o '0'
	            {
	            	saida(4);
	            }
	            else// se i é impar é o 'X'
	            {
	            	saida(5);
	            }
	            jogada=entrada();
	      }while((jogada>9 || jogada<1)||!jogada_valida(vetor_posicao,jogada));
 return jogada;
 }
