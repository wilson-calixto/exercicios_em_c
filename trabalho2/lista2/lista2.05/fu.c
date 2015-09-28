/* uma função de subtração */
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
