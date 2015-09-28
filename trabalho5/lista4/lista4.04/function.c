
/* Programacao de Computadores e ALgoritmos
 * function.c
 *
 * Equipe:
 *
 *          Paulo Henrique
 *          Rai Santos
 *          Jackson Kelvin
 *          Jailson
 *          Ewerton Petillo
 *          
*/
#include<stdio.h>
#include <string.h>

int position_char(char s[], char c,int tam)
{
    int i, pos=0;
    for (i=0; i<tam; i++)
    {
       if(s[i] ==  c)
       {
           pos = i; 
       }
    }
    return pos;
}
 
 
