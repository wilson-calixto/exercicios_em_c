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
	char gabarito[10],/*gabarito da prova*/
	resp[10];/*respostas do aluno corrente*/
	int pontuacao[pontos];
  
	printf("Digite o numero de alunos:\n");
	scanf("%d", &n);
 	
	printf("Obs.:o gabarito deverá ser constituido das letras: a,b,c,d,e\n");
	printf("Digite a letra das questões do gabarito da prova:\n");
	for (i = 0; i < 10; i++) 
   	scanf(" %c", &gabarito[i]);  
  	/* O espaco em branco antes do %c e' importante.
     	Ele evita que o return digitado depois do n seja 
     	interpretado como a primeira "letra" do gabarito*/
  	for (aluno = 1; aluno <= n; aluno++) 
  	{
    		pontos = 0;

    		printf("Obs.:o gabarito deverá ser constituido das letras: a,b,c,d,e\n");
    		printf("Digite as letras correspondentes as respostas do aluno %d:\n ", aluno);
    		for (i = 0; i < 10; i++) {
      			scanf(" %c", &resp[i]);  /* atencao para o espaco em branco */
      		if (resp[i] == gabarito[i])
        	pontos = pontos + 1;
    		}
		pontuacao[aluno]=pontos;
		printf("gabarito da prova:\n");
		for (i = 0; i < 10;++i)
		{
			printf("%c\n", gabarito[i]);
		}
		printf("gabarito do aluno:%d \n",aluno);
		for (i = 0; i < 10;++i)
		{
			printf("%c\n", resp[i]);
		}
		printf("O aluno %d fez %d pontos \n",aluno,pontuacao[aluno]);
		//printf("O aluno %d fez %d pontos\n", aluno, pontos);
  	}
	return 0; 
}
