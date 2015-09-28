float iterate_number(int num)
{
	float aux=1, impar, i;
	float acumulador = 0;
	for (i=1,impar=1;i<=num;i++)
	{
		acumulador = acumulador + ((aux+impar)/(i+3));
	        aux = aux+impar;
	        impar = impar+2;
	}
	return acumulador;
}
