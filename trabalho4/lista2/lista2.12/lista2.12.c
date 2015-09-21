
/* Programacao de Computadores e ALgoritmos
 * Trabalho 4
 * lista2.12.c
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
#include<stdio.h>
#include "function.h"
#define MAX 10

int main()
{
    int n, vet[MAX], i,j, x, p[MAX], ind, cont;

    printf("Digite o grau do polimonio: \n");
    scanf("%d", &n); //Verifica o grau do polinomio
    for (i=n; i>=0; i--)
    {
        printf("Coeficiente de A[%d]: \n", i); //Le os coeficientes do polinomio de tras pra frente
        scanf("%d", &vet[i]); 
    }
    printf("Digite um valor para a,tal que (x-a = 0): \n" ); //Verifica m valores para "a" para efetuar a divisao dos polinomios 
    scanf("%d", &x);
    ind = n; //variavel que vai pegar o indice inicial do polinomio(vetor)
    for(j=n-1;j>=0;j--)
    {
        p[j] = polynomial(vet,p,j,x,ind); //O novo vetor(resultado) recebe a funcao que usa o metodo de Briot Ruffini para dividir polinomio
    }
    for (i=ind-1 ; i>=0; i--) // Impressao do polinomio(vetor) resultante da divisao
    {
        printf("%dx^%d + ", p[i], i);
    }
}
 

