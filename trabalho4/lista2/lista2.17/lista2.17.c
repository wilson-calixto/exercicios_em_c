
/* Programacao de Computadores e ALgoritmos
 * Trabalho 4
 * lista2.17.c
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
#include "functions.h"
#define MAX 40 //Definicao do valor maximo do vetor
int main()
{
    int n, vet[MAX], i, sum;

    printf("Digite a quantidade de termos: \n");
    scanf("%d", &n); //Verifica quantidade de termos
    printf("Digite os %d termos: \n", n);
    for(i=0;i<n; i++) //Leitura do vetor
    {
        printf("Digite o termo[%d]: ", i+1);
        scanf("%d", &vet[i]);
    }
    sum = sum_max(vet,n);//Chamada a funcao
    printf("A soma maxima do segmento eh: %d \n", sum);
}
