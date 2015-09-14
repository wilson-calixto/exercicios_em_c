float calc_num(int n)
{
	int cont = 1;//contador
	float s,aux;//'s' da sequencia, auxiliar 

	s = 1.0;

	while(cont <= n)
	{ 
		aux = fat(cont); //'aux' recebe o fatorial de todos os n numeros.	
		s +=  1/(float) aux; //aqui 's' acumula a soma de todos os 1/'aux'
		cont++; //contador é incrementado
	}

	return(s);
}
