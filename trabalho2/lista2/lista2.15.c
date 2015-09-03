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

/*Calcula media aritimetica */
float media()
{
    float i,n,soma,media;

    soma=0;
    i=0;
    n=1;

    while(n!=0)
    {
        printf ( "\nDigite um numero positivo: " );
        scanf ( "%f", &n );

        
        while ( n<0 )
        {
            printf ( "\nNumero invalido." );
            printf ( "\nDigite um numero positivo: " );
            scanf ( "%f", &n );
        }
        soma+=n;
        i++;
    }

    media=soma/(i-1);

    return media;
}

int main ( int argc,const char *argv[] )
{
    float a;

    a=media();

    printf ( "Valor medio: %f\n",a );
    
    return 0;
}
