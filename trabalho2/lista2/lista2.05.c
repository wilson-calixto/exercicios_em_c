/* Programação de computadores e algoritmos
 *
 * trabalho 2
 * questão 5
 *
 * equipe:
 *          Jackson Kelvin
 *          Delrick
 *          Manoel
 *          Gabriel Faraco
 *          Sérgio
 *  Autor = Raí
 *              */

#include <stdio.h>

/* uma função de subtração */
/* nesta questão apenas para subtrair os segundos */

/*function to subtraction*/
int subtraction(int num1, int num2)
{
    int aux;
    aux = num1 - num2;
    return aux;
}

/* função para converter segundos em horas */

/*function seconds to hours*/
int sec_hours(int sec)
{
	int hour;
	hour = sec/3600;
	return hour;
}

/* função que converte segundos em minutos */

/*function seconds to minutes*/
int sec_minutes(int sec)
{
	int min;
	min = sec/60;
	return min;
}

/* função principal*/
int main(int argc, const char *argv[])
{
    int seconds, hours, minutes, aux1, aux2, sec;

    printf("Insira os segundos: \n");
    scanf("%d", &seconds);

    hours = sec_hours(seconds);
    aux1 = seconds - (hours*3600);
    minutes = sec_minutes(aux1);
    aux2 = ((hours*3600)+(minutes*60));
    sec = subtraction(seconds, aux2);

    printf("%d segundos equivalem a %d horas, %d minutos e %d segundos \n", seconds, hours, minutes, sec);

    return 0;
}
