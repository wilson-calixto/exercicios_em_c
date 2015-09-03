/*
Programacao de Computadores e Algoritmos/Laboratorio de programacao de computadores

questao 19 da lista 3

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
	scanf("%d",&v);
	for (i=1;i<=v;i++){
		printf("digite um numero entre 0 e 1000: ");
                scanf("%d",&num);

		if((num>=0)&&(num<1000)){    //condicao de numero entre 0 e 1000
	
			if (i==1){
				maior=num;
				menor=num;
			}	
			if(num>=maior){
				maior=num;
			}else if (num<menor){
				menor=num;
			}
			soma=soma+num;
		}else{
			printf("numero fora do intervalo\n");
			maior=0;             //tratamento de erro de linguagem
			menor=0;            
			break;
		}
	}
	printf("a soma dos valores: %d \no maior numero: %d \ne o menor numero: %d\n", soma,maior,menor);
		
	return 0;
}
