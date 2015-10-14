/* Programacao de Computadores e Algoritmos
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
    int x, y; //numeros a serem somados
    
    printf ( "digite o valor de x:\n" );
    scanf ( "%d", &x ); //recebe o valor de x
    printf ( "digite o valor de y:\n" );
    scanf ( "%d", &y );//recebe o valor de y
  
    printf("resultado:\n %d \n", inc(x,y)); //mostra o valor da soma recursiva de 'y' + 'x'.
  
    return 0;
}
