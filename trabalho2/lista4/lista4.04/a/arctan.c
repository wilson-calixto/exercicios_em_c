/* Função calcula a arctangente das coordenadas x e y
 * recebe um float x
 * retora um float
 * */

#include "../../../util.c/util.h"

float arctan(float x)
{
	float resposta=0,pi=3.14,valor;
	int e=1,i=1.0;
	
	do{
		valor=power(x,i)/i;

		if(e%2==0)
		{
			resposta=resposta-valor;
		}
        else
        {
			resposta+=valor;
		}
		e++;		
		i=i+2;
        
	}while(valor>0.0001);
	
	return resposta;
}
