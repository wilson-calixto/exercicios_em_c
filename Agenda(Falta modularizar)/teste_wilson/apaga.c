#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 1000

void apaga(char arquivo[])
{
    
    FILE *arqEntrada, *arqSaida;
    int line = 0 , linha = 1;
    int i;
    char textoArquivo[TAM], output[TAM] = "";
    
    strcat(output, arquivo);
    strcat(output, ".editado");
    
    if(((arqEntrada = fopen(arquivo, "r")) == 0) || ((arqSaida = fopen(output, "w")) == 0)) 
        printf("\nImpossivel abrir arquivo...\n\n");
    else
    {

        printf("Digite o codigo do usuario a ser apagado no arquivo: "); 
        scanf("%d", &line); 
    
        line = (line * 7);
    
        rewind(arqEntrada); 
    
        for(i = 0; !feof(arqEntrada);i++)
        { 
    	    memset(textoArquivo, '\0', 100); 
            fgets(textoArquivo, 101, arqEntrada);
        
            if(linha == line || linha == line - 1)
            {
                if(linha == line - 1)
                {
                    fprintf(arqSaida,"Nome:\n");
                    linha += 1;
                    continue;
                }
                else if(linha == line)
                {
                    fprintf(arqSaida,"Endereco:\n");
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
