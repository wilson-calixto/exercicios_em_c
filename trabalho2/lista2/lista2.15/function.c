#include <stdio.h>
/* Função para calcular a somatória de um úmero
 * não recebe nenhum parametro
 * retirna um float
 */
float calc_mean()
{
    float i,num,sum,mean;

    sum=0;
    i=0;
    num=1;

    while(num!=0)
    {
        printf ( "\nDigite um numero positivo: " );
        scanf ( "%f", &num );

        
        while ( num<0 )
        {
            printf ( "\nNumero invalido." );
            printf ( "\nDigite um numero positivo: " );
            scanf ( "%f", &num );
        }
        sum+=num;
        i++;
    }

    mean=sum/(i-1);

    return mean;
}


