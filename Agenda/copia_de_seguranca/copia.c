#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 1000

void copia(char dest[], char origem[])
{
    
    FILE *arqEntrada, *arqSaida;
    int i;
    char textoArquivo[TAM];

    if(((arqEntrada = fopen(origem, "r")) != 0) || ((arqSaida = fopen(dest, "r")) != 0))
    {
        arqSaida = fopen(dest, "w");
   
        for(i = 0; !feof(arqEntrada);i++)
        { 
    	    memset(textoArquivo, '\0', TAM); 
        
            fgets(textoArquivo, TAM+1, arqEntrada);
        
            fputs(textoArquivo, arqSaida);
        }
        
        fclose(arqEntrada);   
        fclose(arqSaida);
    }
}
