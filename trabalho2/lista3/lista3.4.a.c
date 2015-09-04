#include<stdio.h>
#include<math>

float arctan(float numero);
float serie(float numero);

int main()
{
	float valor;
	printf("digite o valor\n");
	scanf("%f",valor);

	if(valor>=0 &&valor<=1)
	{
		prinf("o resultado é :%f\n",serie(valor));
	}else{
	
		printf("o valor é invalido\n");
		
	}
	return 0;
}


/*
float arctan(float numero)
{
	float arcotangente=0;
 tem que fazer ao arcotangente


	return arcotangente;
}
		*/	


float serie(float x)
{
	float reposta=0;
	int i=1;
/*	x=arctan(x); */
	do{
		resposta=(pow(x,i))/i - (pow(x,i+2))/(i+2);
		i=i+4;

		}while(resposta!<0.0001);

	return resposta;
}
