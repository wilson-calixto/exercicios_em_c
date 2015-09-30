#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//--------------------------------------------------------------------------------------------------------------------
//Função para achar um char dentro de uma string

int find(char *str, char ch)
{
    int indice = 0; //inicia indice
    
    while(indice < strlen(str))
    {
        if(str[indice] == ch)  
          return indice; //se achar 'ch' na string 'str' retorna indice
        indice++; //incrementa indice
    }
    
    return -1; //retorna '-1' pois '0' é um índice possível 
}

//--------------------------------------------------------------------------------------------------------------------
//Função para copiar o conteudo de uma string para outra

void copy(char *a, char *b)
{
    int i; //i - contador
    
    for(i = 0; i < strlen(a); i++)
    {
        b[i] = a[i]; //b no indice i recebe o conteudo de a no indice i
    }
}
//--------------------------------------------------------------------------------------------------------------------
//Função Select Sort : Ordenação de numeros

int select_sort(int num[], int tam)
{
	int i, j, min, aux;
	for(i=0;i<(tam-1); i++)
	{
		min=i;
		for(j=(i+1);j<tam;j++)
		{
			if(num[j] < num[min]
				min=j;
		}
		if (i!=min)
		{
			aux=num[i];
			num[i]=num[min];
			num[min]=aux;
		}
	}


}
