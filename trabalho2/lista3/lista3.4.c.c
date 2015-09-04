#include<stdio.h>
/* lista 3 questao 4 letra c ele so devolve o valor do angulo alfa, falta devolver o eixo horozontal*/


float alfa(float x, float y);
float s_sort(float vet[100]);
int main()
{
	int i,n;
	float radiandos=180,x,y,vet[100];

	printf("Digite o numero de loops menores que 100 \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Digite um valor para o x \n");
		scanf("%f",&x);
		printf("Digie um valor para o y \n");
		scanf("%f",&y);
		if(x>=0 && y>=0)	
		{
			vet[i]=alfa(x,y);
		}else{
			printf("O valor digitado é invalido");
		}
	
	}


	
	printf("o menor valor é %f",s_sort(vet[100]));

	return 0;
}



float alfa(float x, float y)
{
	float pi=3.14,aux=0;
	if(y<x)
	{
		aux=y/x;
		return arctan(aux);
	}else{
		aux=(x/y)
		return pi/2-arctan(aux)
			
}

float s_sort(float vet[100])
{
	int i,j,vetor1[100],temp;
	
		for(i=0;i<10;i++)
		{
			for(j=0;j<10;j++)
			{
				if(vetor1[j]<=vetor1[i])
				{
							
					temp=vetor1[i];
					vetor1[i]=vetor1[j];
					vetor1[j]=temp;
				}		
			}	
		}
	
		return vet[0];
}








	


}
