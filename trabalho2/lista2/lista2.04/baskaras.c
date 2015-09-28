#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void baskaras(float a, float b, float c)
{
	float x1=0, x2=0, delta=0, sqrdelta; //declara as variaveis
		
	if(a == 0) //se a for igual a zero
	{
		printf("Nao e uma funcao do segundo grau. /n"); 
	}
	else
	{
		delta = (b*b)-4*a*c; //formula de delta
		sqrdelta = sqrt(delta);
		if(delta<0) //se delta for manor do que zero
		{
			printf("Nao ha raiz, pois delta menor do que 0 \n"); //neste caso a equacao nao tera raizes reais
		}
		else if(delta == 0) //se delta for igual a zero x1 sera igual a x2, sendo assim
		{
			
			//a partir daqui, sera usada a funcao (que calcula a raiz quadrada) inclusa na biblioteca <math.h>

			x1 = (-b + sqrdelta)/(2*a); //formula para x1 (x linha) 

			printf("x1 e x2 = %.2f \n", x1);
		}
		else
		{
			x1 = (-b + sqrdelta)/(2*a); //formula para x1
			x2 = (-b - sqrdelta)/(2*a); //formula para x2
			
			printf("x1 = %.2f \n", x1); //impressao das raizes
			printf("x2 = %.2f \n", x2);
		}
	}
}
