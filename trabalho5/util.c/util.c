#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//--------------------------------------------------------------------------------------------------------------------
//Função para achar um char dentro de uma string

int find(char *str, char ch)
{
    int indice = 0; //inicia indice
    
    while(indice < strlen(str))
    {
        if(str[indice] == ch)  
          return indice; //se achar 'ch' na string 'str' retorna indice
        indice++; //incrementa indice
    }
    
    return -1; //retorna '-1' pois '0' é um índice possível 
}

//--------------------------------------------------------------------------------------------------------------------
