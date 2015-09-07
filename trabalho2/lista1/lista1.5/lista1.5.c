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
 
 
 //Função que altera o custo, retornando um valor float
 float soma_imposto(float taxaImposto, float custo)
 {
 	float novoValor;
 	
 	//Aplicando fórmula matemática para adicionar uma taxa sob o custo passado por parâmetro
 	novoValor = custo + (custo*(taxaImposto)/100);	
 	return novoValor;	
 }
 
 
 int main(int argc, char const *argv[])
 {
 	
 	//Declaração das Variáveis
 	float taxa, custo, novoCusto;
 	
 	//Recebendo os valores de entrada do usuário
 	printf("Digite a Taxa do Imposto: ");
 	scanf("%f",&taxa);
 	printf("Digite o custo do item: ");  	
 	scanf("%f",&custo);
 	
 	// Chamando a função para alterar o custo atual
 	novoCusto = somaImposto(taxa, custo);
 	
 	//Imprimindo o valor antigo e o novo valor
 	printf("O novo valor de %.2f eh %.2f: ",custo,novoCusto);
 	printf("\n");
 	return 0;
 }