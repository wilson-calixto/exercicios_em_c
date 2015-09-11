
/*Programacao de Computadores e Algoritmos / Laboratorio de Programacao de Computadores
*
* Trabalho 2
* Lista 2
* Questao 6
* Equipe:
*	Andressa Moreira
*	Elizabeth Castro
*	Juliany Raiol
*	Luana Andrade
*	Wilson Neto
*/


#include <stdio.h>
#include "Dreka.h"

//Definindo a funcao main() padrao
int main(int argc, char const *argv[])
{
	int ano, meses, dias; //Declarando variaveis
	int idade; //Variavel que recebera todos os valores finais

	printf("Digite sua idade em anos, meses e dias: \n");
	scanf("%d %d %d", &ano, &meses, &dias);

	idade = idadedias(ano, meses, dias);

	printf("Sua idade em dias eh: %d\n", idade);

	return 0;
}
	
	
