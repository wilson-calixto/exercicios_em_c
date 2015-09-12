/*Programacao de Computadores e Algoritmos / Laboratorio de Programacao de Computadores
 *
 * Trabalho 2
 * Lista 1
 * Questao 5
 *
 *\Equipe:  Elizabeth Castro
 *          Andreza Moreira
 *          Juliany Raiol
 *          Luana Andrade
 *          Wilson Neto
 *
 *     Autor: Juliany Raiol
 *
 * / */
 
 #include <stdio.h>
 #include "sum_imp.h"
 
 int main(int argc, char const *argv[])
 {
 	
 	//Declaração das Variáveis
 	float taxa, custo, novo_custo;
 	
 	//Recebendo os valores de entrada do usuário
 	printf("Digite a Taxa do Imposto: ");
 	scanf("%f",&taxa);
 	printf("Digite o custo do item: ");  	
 	scanf("%f",&custo);
 	
 	// Chamando a função para alterar o custo atual
 	novo_custo = sum_imp(taxa, custo);
 	
 	//Imprimindo o valor antigo e o novo valor
 	printf("O novo valor de %.2f eh %.2f: ",custo,novo_custo);
 	printf("\n");
 	return 0;
 }