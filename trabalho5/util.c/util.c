#include <stdio.h>
#include <stdlib.h>

int find(char *str, char ch)
{
    int indice = 0;
    
    while(indice < strlen(str)) 
    {
        if(str[indice] == ch)  
          return indice;
        indice++;
    }
    
    return -1;
}
