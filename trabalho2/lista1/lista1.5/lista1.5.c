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
 
 float somaImposto(float taxaImposto, float custo)
 {
 	float novoValor;
 	novoValor = custo + (custo*taxaImposto);	
 	return novoValor;	
 }
 
 
 int main(int argc, char const *argv[])
 {
 	
 	float taxa, custo, novoCusto;
 	printf("Digite a Taxa do Imposto de acordo como formato: ");
 	scanf("%f",&taxa);
 	printf("Digite o custo do item: ");  	
 	scanf("%f",&custo);
 	novoCusto = somaImposto(taxa, custo);
 	printf("O novo valor de %.2f eh %.2f: ",custo,novoCusto);
 	printf("\n");
 	return 0;
 }