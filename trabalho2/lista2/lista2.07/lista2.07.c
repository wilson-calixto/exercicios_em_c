/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 2
 * lista2.07.c
 *
 * Equipe:
 *
 *          Ewerton
 *          Hermann
 *          Jailson
 *          Lucas Botinelly
 *          Richardson
 *          Wilson Calisto 
 */
#include<stdio.h>
#include"util.c"
int main(int argc, const char *argv[])
{
	int num, perf;
	printf("Digite o número que deseja saber se é perfeito : ");
	scanf("%d", &num);
	perf=is_perfect(num);
	printf("%d", perf);
	return 0;
}
