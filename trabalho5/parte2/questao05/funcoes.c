#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/* funcao array_creator cria um vetor de n posicoes informadas pelo usuario e o preenche com numeros randomicos, no 
fim, devolve o vetor preenchido, serve para testa as funcoes busca sequencial e busca binaria*/
void array_creator(int n)    
{
    int i, cont; // variaveis e contadores
    int *vetor; // definição do vetor
    vetor = (int *) malloc(n*sizeof(int)); // usando a alocação dinamina para alocar a quantidade certa de memoria
    srand(time(NULL)); // funcao para chamar o equivalente ao random em c.
    
    for(i = 0; i < n; i++) //laço de preenchimento do vetor
    {
	vetor[i] = rand()%n; // preenchimento do vetor com numeros aleatorios
    }

    for (cont = 0; cont < n; cont++) // laço para printar o vetor
    {
        printf("%d", vetor[cont]); 
    }
    printf("\n"); // pula uma linha no final
    free(vetor);   // funcao para limpar a memoria depois de alocada

}


/* funcao busca binaria, divide o vetor em dois e procura a partir do meio para as bordas. Funciona apenas em um 
vetor ordenado.*/
int busca_binaria (int x, int n, int v[]) 
{
   int e, m, d; // definiciao das variaveis
   e = 0; d = n-1;                  
   while (e <= d) 
   {                          
      m = (e + d)/2; // divide o vetor ao meio                        
      if (v[m] == x) // faz a busca de x no vetor
	{
		 return m; // se encontrar retorna a posição do que se estava procurando              
	}
      if (v[m] < x)
	{
		 e = m + 1; // busca sequencial no vetor, ordem normal
	}	               
      else 
	{
		d = m - 1; // busca reversa no vetor, ordem reversa
	}
   }
   return -1;  // caso nao encontra o valor retorna -1
}            

// funcao busca sequencial
int buscaSequencial(int tamanho, int vetor[],int p) // recebe o tamanho do vetor, um vetor, o que se quer encontrar
{
 int i; // contador para o laço
 for(i=0;i<=tamanho;i++) //percorre o vetor de forma crescente
 {
  if(vetor[i]==p){
   return i; // devolve a posição de onde i se encontra no vetor
   }
 }
 return -1; // caso nao encontra o valor, retorna -1
}
// funcao tempo, calcula o tempo de execução de um determinado programa
void tempo(clock_t tempoInicial, clock_t tempoFinal) 
{
	double tempoGasto; // definindo parametros
	tempoGasto = (tempoFinal-tempoInicial)/CLOCKS_PER_SEC); // calculando o tempo gasto
	printf("Tempo em segundos: %f", tempoGasto);
}

    
