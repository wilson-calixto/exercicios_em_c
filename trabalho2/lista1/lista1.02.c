/* Programacao de computadores e algoritmos
 * Treabalho 2
 * lista1.02.c
 *
 * Equipe:
 *      Paulo Marinho
 *      Evandro Fernandes
 *      Jackson Gomes
 *      Rodrigo Oliveira
 *      Robson(TADS)
 *      Jessica (TADS)
 */


#include <stdio.h>

int serie_repetition(int n) //imprime o valor de i j vezes numa serie de tamanho n
{
    int i,j;
    scanf("%d", &n); /*  adicionando o input do usuario */
    for(i=1;i<=n;i++)//laco externo indica o tamanho da serie
    {
        for(j=1;j<=i;j++)//laco interno indica a quantidade de numeros em cada linha da serie
        {   
            printf ("%d\t", j);
        }
        printf ("\n");
    }
}

int main (int argc, const char *argv[])
{
    int n; /*  reduzindo o uso de variaveis desnecessarias */
    serie_repetition(n);
    return 0;
}
