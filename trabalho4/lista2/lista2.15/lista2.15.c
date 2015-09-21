#include<stdio.h>
#include "../../util.c/util.h"
#include "media.h"

int main(int argc, const char *argv[])
{
        int i, j, aluno, prova;
        float *peso, *nota, somap = 0.0, soman = 0.0;
        
        printf("Insira a quantidade de alunos :");
        scanf("%d", &aluno);
        printf("Insira a quantidade de provas: ");
        scanf("%d", &prova);
        
        printf("Pesos das provas\n");
        read_vector(prova, peso);
        
        printf("Notas das provas\n");
        read_notas(nota, peso,aluno, nota,prova);
               
        return 0;
}
