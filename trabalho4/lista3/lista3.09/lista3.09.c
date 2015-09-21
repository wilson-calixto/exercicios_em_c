
/* Programacao de Computadores e ALgoritmos
 * Trabalho 4
 * lista3.09.v2.c
 *
 * Equipe:
 *
 *          Paulo Henrique
 *          Rai Santos
 *          Jackson Kelvin
 *          Wilson Calisto
 *          Ewerton Petillo
 *          
 */

#include <stdio.h>

#define MAX 20 //  Tamanho maximo do matriz 

int find_position(int mat[][MAX], int i, int j) //Funcao para procurar a posicao da matriz a ser trocada, verifica os termos antecedentes
{ 						//sao -1 ou 0 verificando se a posicao subsequente eh livre ou nao
     if (mat[i][j] != -1 && ((mat[i-1][j] == -1 && mat[i+1][j] != -1) || (mat[i][j-1] == -1 && mat[i][j+1] != -1)))
	{
          return 1;
	}
     else return 2;
}

int main(int argc, const char *arqv[]) {
      int mat[MAX][MAX], line, col;
        int i, j, cont;

          printf("Digite quantidade de linhas: ");
          scanf("%d", &line);
          printf("\nDigite a quantidade de colunas: ");
          scanf("%d", &col);

         //Leitura da matriz
          for (i = 1; i <= line; i++)
          {
            for (j = 1; j <= col; j++)
            {
                printf("Digite o elemento MATRIZ[%d][%d]: ", i, j);
                scanf("%d",&mat[i][j]);
            }
          }

         //Criacao da moldura, para facilitar a comparacao de linhas a moldura recebera -1 em toda sua extensao
          for (j = 0; j <= col+1; j++)
          {
               mat[0][j] = -1;
               mat[line+1][j]= -1;
          }
          for (i = 1; i <= line; i++)
          {
               mat[i][0] = -1;
               mat[i][col+1] = -1;
          }

         //Aqui sera a procurada a posicao que sera incrementada
          for (i = 1; i <= line; i++)
          {
            for (j = 1; j <= col; j++)
            {   
                if (find_position(mat,i,j) == 1)
                {
                    cont++;
                    mat[i][j] = cont;
                }
            }
          }

            //Impressao do resultado 
          for (i = 1; i <= line; i++)
          {
            for (j = 1; j <= col; j++)
            {
                 printf("%d\t",mat[i][j]);
            }
            printf("\n");
          }
}

