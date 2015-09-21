#include <stdio.h>

float soma_peso(float *peso, int prova)
{
        float somapeso = 0.0; 
        int i;
        for (i=0;i<prova; i++)
        {
                 somapeso+=peso[i];
        }    
        return somapeso;
}

float media_ponderada(float *nota, float *peso, int aluno, int prova)
{
        int i, j;
        float media, quo, acm = 0.0;
        for (i=0;i<prova;i++)
        {
             acm+=nota[i]*peso[i];
        }   
        
        quo = soma_peso(peso, prova);
        media=acm/quo; 
        return media;
}

void read_notas(float *nota, float *peso, int aluno,int prova)
{
        int i,j;
        float media, acm=0.0, somapeso=0.0, soman = 0.0;
        for(i = 0; i <aluno;i++)
        {
                for(j=0;j<prova; j++)
                {
                        printf("Insira a nota da %d nota do %d aluno: ", j+1, i+1);
                        scanf("%f",&nota[j]);                        
                }
                media = media_ponderada(nota, peso, aluno, prova);      
                printf("A media ponderada eh: %f\n", media);  
        }     
        
}

float soma_prova(float *nota, int prova)
{
        float somanota = 0.0; 
        int i;
        for (i=0;i<prova; i++)
        {
                 somanota+=nota[i];
        }    
        return somanota;
}


