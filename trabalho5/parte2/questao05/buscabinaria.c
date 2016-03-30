int busca_binaria (int x, int n, int v[]) 
{
   int e, m, d; // definiciao das variaveis
   e = 0; d = n-1;                  
   while (e <= d) 
   {                          
      m = (e + d)/2; // divide o vetor ao meio                        
      if (v[m] == x) // faz a busca de x no vetor
	{
		 return m; //               
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
int busca_sequencial(int tamanho, int vetor[],int p) // recebe o tamanho do vetor, um vetor, o que se quer encontrar
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
	printf("%lf\n",((double)(tempoFinal-tempoInicial)/CLOCKS_PER_SEC));
}
