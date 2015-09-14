/* Programação
 * *
 * *Trabalho 2
 * *lista 3
 * *Desafio 4
 * *
 * *Equipe: 
 * *     Paulo Marinho
 * *     Evandro Fernandes      
 * *     Jessica
 * *     Jackson Gomes
 * *     
 * *
 * */
#include <stdio.h>
#include "reverse.h"
int main (int argc, const char *argv[])
{
    int result,num;

    printf ( "Informe um numero: \n" );
    scanf ( "%d", &num );
    result=reverse(num);
    printf("%d\n",result);

    return 0;
}
