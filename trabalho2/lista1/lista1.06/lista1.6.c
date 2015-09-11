/*Programacao de Computadores e Algoritmos / Laboratorio de Programacao de Computadores
 *
 * Trabalho 2
 * Lista 1
 * Questao 6
 *
 *\Equipe:  Richardson 
 *          Jailson Pereira
 *          Lucas Botinelly
 *          Hermann Hermani
 *          Wilson
 *          Ewerton Petillo
 *
 *          Autor: Ewerton Petillo
 *
 * / */
#include <stdio.h> 
#include "lib_function.h" // Biblioteca onde estao as funcoes usados no codigo

int main(int argc, const char *argv[]){
    int hr, min; // Variaveis de horas e minutos
    char op; // Opcao informada pelo usuario para continuar no loop de escolha
    do{                             // Loop de escolha do usuario
        printf("Digite as horas: ");
        scanf("%d", &hr); // Le a variavel hora
        if (is_hour(hr)==0){ // Chama a funcao para validar a hora
            printf("Valor invalido. \n"); // Retorna valor invalido para usuario
        }else{ 
            printf("Digite os minutos: "); 
            scanf("%d", &min); // Le a variavel minutos
            if(is_minute(min)==0){ // Chama a funcao para validar os minutos
                printf("Valor invalido. \n"); // Retorna valor invalido para usuario
            }else{
                printf("%d:%d %c.M \n ",convert_hour(hr), min, am_pm(hr)) ; // Imprime as horas no novo format
            }
        }
        printf("Deseja tentar novamente[s/n]: "); 
        scanf(" %c", &op); // Le a escolha do usario para continuar
        fflush(stdin); // Limpa o buffer do teclado
    }while(op == 's' || op== 'S');

}
