/*Programacao de Computadores e Algoritmos / Laboratorio de Programacao de Computadores
 *
 * Trabalho 2
 * Lista 2
 * Questao 21
 *
 *\Equipe:  Elizabeth Castro
 *          Andreza Moreira
 *          Juliany Raiol
 *          Luana Andrade
 *          Wilson Neto
 *
 *
 * / */

float iteracao(float a)
{
	float soma;
	int i;

	for(i=1;i<=a;i++)
	{
		soma=soma+(1/i);   // soma os termos da divisão de 1 sobre i

	}
	
	return soma;
	
}
