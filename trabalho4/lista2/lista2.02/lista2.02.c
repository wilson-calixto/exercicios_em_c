/* Programacao de Computadores e ALgoritmos
 * Trabalho 4
 * 
 * Equipe:
 *
 *          Paulo Henrique
 *          Rai Santos 
 *          Jackson Kelvin
 *          Wilson Calisto 
 */
//Autor:Jackson Kelvin de Souza
#include <stdio.h>
#include <stdlib.h> 
#include "process.h"

int main ( int argc, char *argv[] )
{
	int n, i, aluno, pontos,lol;
	char gabarito[30];/*gabarito da prova*/
	char resp[30];/*respostas do aluno corrente*/
  
	printf("Digite o numero de alunos:\n");
	scanf("%d", &n);
 	
	printf("Obs.:o gabarito deverá ser constituido das letras: a,b,c,d,e\n");
	printf("Digite a letra das questões do gabarito da prova:\n");
	for (i = 0; i < 30; i++) 
   	scanf(" %c", &gabarito[i]);  
  	/* O espaco em branco antes do %c e' importante.
     	Ele evita que o return digitado depois do n seja 
     	interpretado como a primeira "letra" do gabarito*/
  	for (aluno = 1; aluno <= n; aluno++) 
  	{
    		pontos = 0;

    		printf("Obs.:o gabarito deverá ser constituido das letras: a,b,c,d,e\n");
    		printf("Digite as letras correspondentes as respostas do aluno %d:\n ", aluno);
 		for (i = 0; i < 30; i++) 
		{
      			scanf(" %c", &resp[i]);  /* atencao para o espaco em branco */
    		}
		lol=process(resp,gabarito);
		printf("gabarito da prova:\tgabarito do aluno:\n");
		for (i = 0; i < 30;++i)
		{
			printf("\t\t%c\n\t\t\t%c\n", gabarito[i],resp[i]);
		}
		printf("\tO aluno %d fez %d pontos\n", aluno, lol);
  	}
	return 0; 
}
