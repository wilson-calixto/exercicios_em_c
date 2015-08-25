#include<stdio.h>





/*
Programação de computadores e algoritmos 
Trabalho 01
equipe

Paulo marinho
Wilson calixto
Sergio Pinheiro
Andressa moriera
Rodrigo oliveira

 LISTA 3 QUESTÃO 27 */



int main(){
int i,acm,media,turmas,alunos;
acm=0;
printf("digite o numero de turmas\n");
scanf("%d",&turmas);

for(i=1;i<=turmas;i++)
{
	printf("digite o numero de alunos\n");
	scanf("%d",&alunos);
	if(alunos>40)
	{
		printf("Voce digitou um numero maior que 40\n");
		i=i-1;
	}else{
		acm=acm+alunos;		
	
		}



}
media=acm/turmas;


printf("a media é %d",media);


	return 0;
}