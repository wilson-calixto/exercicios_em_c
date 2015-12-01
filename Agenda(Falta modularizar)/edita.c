#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "i_o.h"
#define nulo 0
#define erro 1
#define codigo_a_ser_modificado 5
#define nome_do_contato 6
#define endereco_do_contato 7
#define MAX 1000

/*colocar no i_o o fprintf tembem*/
typedef struct Contato
{
    char cod[MAX], nome[MAX], end[MAX];
}Contato;

void edita(char arquivo[])
{
    
    FILE *arqEntrada, *arqSaida;
    int i, line, linha;
    char textoArquivo[MAX];
    char output[MAX] = "";
    Contato contato;
    
    strcat(output, arquivo);
    strcat(output, ".editado");
    
    if(((arqEntrada = fopen(arquivo, "r")) == NULL) || ((arqSaida = fopen(output, "w")) == NULL))
           saida(erro,nulo);
        
    else if((arqEntrada != NULL) && (arqSaida != NULL))
    {
		saida(codigo_a_ser_modificado,nulo);
        
        scanf("%d", &line); 
        getchar();
		saida(nome_do_contato,nulo);
        fgets(contato.nome,MAX,stdin);
		saida(endereco_do_contato,nulo);
        fgets(contato.end,MAX, stdin);

        line = (line* 7) - 1;
   
        for(i = 0; !feof(arqEntrada);i++)
        { 
    	    memset(textoArquivo, '\0', MAX); 
            fgets(textoArquivo, MAX + 1, arqEntrada);
        
            if(linha == line || linha == line - 1)
            {
                if(linha == line - 1)
                {
                    fprintf(arqSaida,"Nome: %s",contato.nome);
                    linha += 1;
                    continue;
                }
                else if(linha == line)
                {
                    fprintf(arqSaida,"Endereco: %s",contato.end);
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
