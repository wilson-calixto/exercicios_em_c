#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "jogo_da_velha.h"




int vetor_posicao[9];
int main()
{

	char matriz[3][3] ={{'1','2','3'},
					   {'4','5','6'},
					   {'7','8','9',}};
		/* mostra a matriz inicial*/
	mostra_matriz(matriz);
	
		para_um(matriz,vetor_posicao);
    
	
    return 0;
}
