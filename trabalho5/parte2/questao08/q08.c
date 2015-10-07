/* Programacao de Computadores e ALgoritmos
 * Trabalho 5 
 * 
 * Equipe:
 *
 *          Paulo Henrique
 *          Rai Santos 
 *          Jackson Kelvin
 *          Wilson Calisto
 *
 */

 //AUTOR: Jackson Kelvin de Souza


#include <stdio.h> 
#include "soma.h"

int main ( int argc, char *argv[] )
{
    int x, y, z;
    printf ( "digite o valor de x:\n" );
    scanf ( "%d", &x );
    printf ( "digite o valor de y:\n" );
    scanf ( "%d", &y );
    
    z = ( soma ( x , y ) );
    printf ( "%d\n" , z );

    return 0;
}
