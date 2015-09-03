/*
Questao 22 da Lista 3

O programa le o numero e testa se ele e primo, se ele nao for primo retorna os divisores dele.

Programacao de Computadores e Algoritmos / Laboratorio de Programacao de Computadores

Equipe: Jackson Kelvin
        Ewerton Petillo
        Gabriel Faraco
        Lucas Frota
*/

#include <stdio.h>
#include <math.h>


int main(int argc, char const *argv[]){
        int i,j=0,x,num, cont;
	int div[num];

        printf("Digite o numero inteiro positivo: ");
        scanf("\n %d", &num); // Le o inteiro positivo
        for(i=1;i<=num;i++){ // Laco para contar quantos divisores possui o numero
                if(num%i==0){
			cont++; //Contador para saber quantos divisores tem o numero
			div[j] = i; // Armazenar num vetor o divisores
			j++;	// Incremeta o indice do vetor
		}			
        }
        if(cont > 2){ // Se possuir mais de 2 divisores nao eh primo.
                printf("Numero nao Primo. \n" );
		printf("Numero e divisivel pelos seguintes numeros: \n");
		for(x=0;x<cont;x++){
			printf("%d \t", div[x]);
		}
		printf(" \n ");
        }else{ // Senao, se possuir so 2 divisores e primo.
                printf("Numero  Primo. \n");
        }
}

