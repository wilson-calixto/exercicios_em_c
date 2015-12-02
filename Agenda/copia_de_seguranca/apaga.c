#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "util.h"
#define nulo 0
#define erro 1
#define codigo_a_ser_apagado 8
#define TAM 1000

void apaga(char arquivo[])
{
    
    FILE *arqEntrada, *arqSaida, *fin;
    int line = 0 , linha = 1, cod;
    int i;
    char textoArquivo[TAM], output[TAM] = "";
    
    strcat(output, arquivo);
    strcat(output, ".editado");
    
    if(((arqEntrada = fopen(arquivo, "r")) == NULL) || ((arqSaida = fopen(output, "w")) == NULL) || (fin = fopen("aux.txt","r")) == NULL)
         saida(erro,nulo);
    else
    {

        saida(codigo_a_ser_apagado,nulo);
        scanf("%d", &line); 
    	
	cod = line - 1;
        line = (line * 7);
    
        rewind(arqEntrada); 
 
	fgets(agenda[0].cod, TAM, fin);
   
        for(i = 0; !feof(arqEntrada);i++)
        { 
    	    memset(textoArquivo, '\0', 100); 
            fgets(textoArquivo, 101, arqEntrada);
        
            if(linha == line || linha == line - 1)
            {
                if(linha == line - 1)
                {
                    fprintf(arqSaida,"Nome:\n");
		    fgets(agenda[cod].nome, TAM, fin);	
                    linha += 1;
                    continue;
                }
                else if(linha == line)
                {
                    fprintf(arqSaida,"Endereco:\n");
		    fgets(agenda[cod].end, TAM, fin);
                    linha += 1;
                    continue;
                }
                else
                {
                    linha = linha + 1; 
                    continue; 
                }
            }
        
            linha = linha + 1;
        
            fputs(textoArquivo, arqSaida);
        }
      
        fclose(arqEntrada);
        fclose(arqSaida);
    }
}
