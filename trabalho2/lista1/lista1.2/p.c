#include <stdio.h>

void serie_repetition(int n) //imprime o valor de i j vezes numa serie de tamanho n
{
    int i,j;
    printf("tamanho da serie: ");
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

