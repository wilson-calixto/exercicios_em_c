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
    int x, y;
    
    printf ( "digite o valor de x:\n" );
    scanf ( "%d", &x );
    printf ( "digite o valor de y:\n" );
    scanf ( "%d", &y );
  
    printf("%d", inc(x,y));
  
    return 0;
}
