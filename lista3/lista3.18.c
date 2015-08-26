/*
Programacao de Computadores e Algoritmos/Laboratorio de programacao de computadores

questao 18 da lista 3

Equipe:
	Ewerton Petillo
	Jackson Kelvin
	Gabriel Faraco
	Lucas Vinicius

*/

#include <stdio.h>

int main(int argc, const char *argv[])
{
	int i, soma=0, v, num, maior, menor;
	printf("digite a quantidade de valores:");
	scanf("%d",&v);			//leitura da quantidade v de valores
	for (i=1;i<=v;i++){
		printf("digite um numero: ");
		scanf("%d",&num);	//leitura dos numeros
		
		if (i==1){
			maior=num;	
			menor=num;
		}
		if(num>=maior){
			maior=num;
		}else if (num<menor){
			menor=num;
		}
		soma=soma+num;		//acumulador da soma dos numeros
	}
	printf("a soma dos valores: %d \no maior numero: %d \n e o menor numero %d\n", soma,maior,menor);
		
	return 0;
}
