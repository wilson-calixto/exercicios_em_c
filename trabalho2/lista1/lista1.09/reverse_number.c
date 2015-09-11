//Procedimento para a impressão de um número invertido
int reverse_number(int num)
{
	int new_value;
	while(num!=0) //Verifica se o quociente de um número dividido por 10 é maior que zero
	{
		// Imprime sempre o resto do número por 10
		new_value=(new_value*10)+(num%10); 
		
		//Decrementa o número dividindo o seu valor por 10
		num/=10;
	}
	return new_value;
}
