#include <stdio.h>

int greater_value(int maior, int num)
{

	if(maior <= num) //verifica se maior é menor que num
		maior = num; //se for, 'maior' recebe 'num'

	return maior;
}

int smaller_value(int menor, int num)
{

	if(menor >= num) //verfica se 'menor' é maior que 'num'
		menor = num; //se for, 'menor' recebe o valor de 'num' 
		
	return menor;
}
