#include "../../../util.c/util.h"

/* 
 * Função recebe 2 coordenadas devolve
 * o angulo das coordenadas em
 * relacao ao eixo horizontal
 *
 * faz uso da função arctan que esta na biblioteca util.h
 *
 */

float alfa(float x, float y)
{
	float pi=3.14,aux,radianos;
	if(x==0 &&y==0)
	{	
		return -1;	
	}

    if(y<x)
	{
		aux=y/x;
		radianos=arctan(aux);
	}
    else
    {
		aux=(x/y);
		radianos=pi/2-arctan(aux);
	}

	return (180*radianos)/pi;
}
