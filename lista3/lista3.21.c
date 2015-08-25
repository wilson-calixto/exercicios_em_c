/*
Questao 21 da Lista 3

O programa le o numero e testa se ele e primo.

Programacao de Computadores e Algoritmos / Laboratorio de Programacao de Computadores

Equipe: Jackson Kelvin
	Ewerton Petillo
	Gabriel Faraco
	Lucas Frota
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]){
	int i,num, cont=0;

	printf("Digite o numero inteiro positivo: ");	
	scanf("\n %d", &num); // Le o inteiro positivo
	for(i=1;i<=num;i++){ // Laco para contar quantos divisores possui o numero
		if(num%i==0){
			cont++; // Contador da quantidade de divisores
		}
	}
	if(cont > 2){ // Se possuir mais de 2 divisores nao eh primo.
		printf("Numero nao Primo. \n" );
		
	}else{ // Senao, se possuir so 2 divisores e primo.
		printf("Numero  Primo. \n");
	}
} 
