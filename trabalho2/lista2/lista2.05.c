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
 *          Raí
 *              */

#include <stdio.h>

/*function to subtraction*/
int subtraction(int num1, int num2)
{
    int aux;
    aux = num1 - num2;
    return aux;
}

/*function seconds to hours*/

int sec_hours(int sec)
{
	int hour;
	hour = sec/3600;
	return hour;
}
/*function seconds to minutes*/

int sec_minutes(int sec)
{
	int min;
	min = sec/60;
	return min;
}

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
