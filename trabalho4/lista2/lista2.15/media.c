#include <stdio.h>

void read_notas(float *nota, float*peso, int aluno, int nota, int prova)
{
        int i,j;
        float media=0.0, acm=0.0, somapeso=0.0, soman = 0.0;
     
        for(i = 0; i <aluno;i++)
        {
                for(j=0;j<prova; j++)
                {
                        printf("Insira a nota da %d nota do %d aluno: ", j+1, i+1)
                        scanf("%f",&nota[i]);                        
                }
                media = media_ponderada(nota, peso, aluno, nota, prova);      
                printf("A media ponderada eh: %f\n", media);  
        }     
        
}

void soma_peso(float*peso, int aluno, int nota, int prova)
{
        float somapeso = 0.0; 
        int i;
        for (i=0;i<provas; i++)
        {
                 somapeso+=provas[i];
        }    
        return somapeso;
}

float soma_prova(float *nota, int prova)
{
        float somanota = 0.0; 
        int i;
        for (i=0;i<aluno; i++)
        {
                 somanota+=nota[i];
        }    
        return somanota;
}


float media_ponderada(float *nota, float *peso, int aluno, int prova)
{
        int i, j;
        float media, quo, acm = 0.0;
        for (i=0;i<prova;i++)
        {
             acm+=nota[i]*peso[i];
        }   
        
        quo = somapeso(peso, prova);
        media=acm/quo; 
        return media;
}
