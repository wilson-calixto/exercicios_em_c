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


#include <stdio.h> 
#include "process.h"

int main ( int argc, char *argv[] )

{
	int n,/*numero de alunos na turma*/
	i,/*varialvel para clico for*/           
	aluno,/*indica o aluno corrente*/
	pontos;/*numero de pontos do aluno corrente*/
	char gabarito[5],/*gabarito da prova*/
	resp[5];/*respostas do aluno corrente*/
  
	printf("Digite o numero de alunos:\n");
	scanf("%d", &n);
 
	printf("Digite o gabarito da prova:\n");
	for (i = 0; i < 5; i++) 
   	scanf("%c", &gabarito[i]);  
  	/* O espaco em branco antes do %c e' importante.
     	Ele evita que o return digitado depois do n seja 
     	interpretado como a primeira "letra" do gabarito*/
  	for (aluno = 1; aluno <= n; aluno++) {
    		pontos = 0;
    		
    		printf("Digite as respostas do aluno %d:\n ", aluno);
    		for (i = 0; i < 5; i++) {
      			scanf("%c", &resp[i]);  /* atencao para o espaco em branco */
      		if (resp[i] == gabarito[i])
        	pontos = pontos + 1;
    		}
			printf("O aluno %d fez %d pontos\n", aluno, pontos);
  	}

	return 0; 
}
