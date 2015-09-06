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

/*Procedimento para a impressão de um número invertido*/
void inversoNumero(int num)
{
	while(num!=0) /*Verifica se o quociente de um número dividido por 10 é maior que zero*/
	{
		/* Imprime sempre o resto do número por 10 */
		printf("%d",num%10); 
		
		/*Decrementa o número dividindo o seu valor por 10*/
		num/=10;
	}
}

int main()
{
	/*Declaração de variáveis*/
	int i, tam,numero;
	
	/*Recebendo os valores de entrada*/
	printf("Digite um Numero: ");
	scanf("%d",&numero);
	
	/*Imprimindo o reverso do numero digitado*/
	printf("Inverso do numero %d eh: ",numero);
	inversoNumero(numero);
	
	printf("\n");
	return 0;
} 