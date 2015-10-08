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
//--------------------------------------------------------------------------------------------------------------------
//Função para ler valores para um vetor

void LerVetor(int n[], int num)
{
    int i; //i - contador

    for(i = 0; i < num; i++)
    {
        scanf("%d", &n[i]); //lê valores para o vetor
    }
}
//--------------------------------------------------------------------------------------------------------------------
//Função Quick Sort : Ordenação de numeros

#incl
#include <stdlib.h>

void Quick(int vetor[], int inicio, int fim){
   
   int pivo, aux, i, j, meio;
   
   i = inicio;
   j = fim;
   
   meio = (int) ((i + j) / 2);
   pivo = vetor[meio];
   
   do{
      while (vetor[i] < pivo) i = i + 1;
      while (vetor[j] > pivo) j = j - 1;
      
      if(i <= j){
         aux = vetor[i];
         vetor[i] = vetor[j];
         vetor[j] = aux;
         i = i + 1;
         j = j - 1;
      }
   }while(j > i);
   
   if(inicio < j) Quick(vetor, inicio, j);
   if(i < fim) Quick(vetor, i, fim);
}

}
//--------------------------------------------------------------------------------------------------------------------

