#include<stdio.h>
/*  ele so devolve o valor do angulo alfa, falta devolver o eixo horozontal*/


float alfa(float x, float y);
float arctan(float numero);
float potencia(float x,float y);


int main()
{
float radiandos=180,x,y;


printf("Digite um valor para o x \n");
scanf("%f",&x);
printf("Digie um valor para o y \n");
scanf("%f",&y);
	if(x>=0 && y>=0)	
	{
		printf("O valor é %f",alfa(x,y));
	}else{
		printf("O valor digitado é invalido");
	}
	

	return 0;
}

float alfa(float x, float y)
{
	float pi=3.14,aux;
	if(y<x)
	{
		aux=y/x;
		return arctan(aux);
	}else{
		aux=(x/y);
		return pi/2-arctan(aux);
	}	
}

float arctan(float x)
{
	float resposta=0,pi=3.14,valor;
	int e=1,i=1;
	do{
		valor=potencia(x,i)/i;

		if(e%2==0)
		{
			resposta=resposta-valor;
		}else{
			resposta+=valor;
		}
		e++;		
		i=i+2;
		}while(valor>0.0001);
	return resposta;
}

float potencia(float x,float y)
{
	int i;
	float k=1;
	for(i=1;i<=y;i++)
	{
		k=k*x;
	}
	return k;
}






