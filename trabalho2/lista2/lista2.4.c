/*
* Programacao de Computadores e Algoritmos
* Trabalho 2
* Questao 2.4
* Equipe: Benjamin Borges
* Davi Tavares
* Paulo Henrique
* Fernando Calderaro
* Lucas Frota
* Luiz Fernando
*
* */

#include "../../util.c/util.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float bhaskara(float a, float b, float c);

float bhaskara(float a, float b, float c)
{
	float x1, x2, delta;
	
	if(a == 0)
	{
		printf("Nao e uma funcao do segundo grau. /n");
	}
	else
	{
		delta = (b*b)-4*a*c;
		
		if(delta<0)
		{
			printf("Nao ha raiz, pois delta menor do que 0 \n");
		}
		else if(delta == 0)
		{
			x1 = (-b + sqrt(delta))/(2*a);

			printf("x1 e x2 = %.2f \n", x1);
		}
		else
		{
			x1 = (-b + sqrt(delta))/(2*a);
			x2 = (-b - sqrt(delta))/(2*a);
			
			printf("x1 = %.2f \n", x1);
			printf("x2 = %.2f \n", x2);
		}
	}
}
