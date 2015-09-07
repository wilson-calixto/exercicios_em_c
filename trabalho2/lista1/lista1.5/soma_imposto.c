 //Função que altera o custo, retornando um valor float
 float soma_imposto(float taxaImposto, float custo)
 {
 	float novoValor;
 	
 	//Aplicando fórmula matemática para adicionar uma taxa sob o custo passado por parâmetro
 	novoValor = custo + (custo*(taxaImposto)/100);	
 	return novoValor;	
 }
 