
// FUNCAO PARA CRIAR A MATRIZ COM NUMEROS DE 0 A 1
//wilson-neto

#include <stdlib.h>
#include <time.h>
//definindo tamanho da matriz 10x10
#define TAM 10

void criar_matriz(float **mat)
{
	int matriz[TAM][TAM],a;
	int linha, coluna;
	//valor da matriz vai ser sempre alterada a acada execução
	srand(time(NULL));
	//escrevendo na Matriz
	//matriz começa no ponto [0][0]
	for(linha = 0 ; linha < TAM ; linha++)
	{
		for(coluna = 0 ; coluna < TAM ; coluna++)
		{
			//gera numeros aleatoros de 0 até 149
			a=rand() %150;
			//diminui a probabilidade de gerar o numero 1
			if(a<40)
			{
				matriz[linha][coluna]=1;
			}
			//aumenta a possibilidade e gerar o numero 0
			else
			{
				matriz[linha][coluna]=0;
			}
		}
	}

	//O valor da primeira linha e da primeira coluna é sempre 0
	matriz[0][0]=0;
	//O valor da ultima linha e ultima coluna é sempre 0
	matriz[9][9]=0;

}
