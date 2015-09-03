/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 2
 * lista2.25.c
 *
 * Equipe:
 *
 *          Ewerton
 *          Hermann
 *          Jailson
 *          Lucas
 *          Richardson
 *          Wilson 
 */

#include <stdio.h> 

/* 
 * Calcula media aritimetica de varios numeros
 * ate que seja digitado 0
 * retorna um float
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

int main ( int argc,const char *argv[] )
{
    float result;

    result=calc_mean();

    printf ( "Valor medio: %.2f\n",result );
    
    return 0;
}
