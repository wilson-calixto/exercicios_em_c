int check_values(int h1, int h2, int m1, int m2)
{
    if(h1<0||h2<0||h1>23||h2>23||m1<0||m2<0||m2>59||m1>59) // da o check se os valores estão fora de seus respectivos intervalos 
    {  							  //(0-59) para minutos e (0-23) para horas. Caso esteja, ele retorna o valor 0 	
        return 0;            				 // que a linguagem entende como falso se inserido dentro de um if ( 0 ). Caso
    }							// contrário retorna um valor inteiro, que o if entende como condição verdadeira
    else                                               // (no caso o número 1)
    {
        return 1;
    }
}
int dif_min(int m1, int m2)  //Aqui é a função que retorna a diferença entre minutos, eu empresto 1 hora do campo de diferença de horas
{			    // (Observe na função de diferença de horas)faço a subtração do primeiro valor pelo 60 ( para converter para
    int difm=0;		   // a base 60) e adiciono o segundo valor. Caso o resultado seja maior ou igual a 60 eu devolvo a hora ( deixo
    difm=60-m1+m2;	  //de subtrair -1 na diferença de horas. Observe a função abaixo) e deixo a diferença em minutos novamente.
    if(difm>=60)
    {
        difm+=-60;
    }
    return difm;
}




int dif_hour(int h1, int h2, int m1, int m2) //Esta é a função de diferença de horas, como não trabalhamos com ponteiro ainda, tive de 
{					    // inserir os campos da outra função também só pra levar em conta a condição do retorno dela
    int difh=0;				   // ser menor do que 60 (o que acarretaria na subtração de 1 hora na diferença). Aqui a lógica é 
    if(60-m1+m2<60)			  // parecida com a da função de minutos: eu levo em conta o retorno da formula de calculo da funçao 
    {					 //de minutos, caso seja menor do que 60, subtraio 1 hora da diferença de horas, senão continuo 
	difh=-1;			// normalmente.No segundo if se o primeiro valor for maior que o segundo a diferença se dara da 
    if(h1>h2)		 	       // subtração do primeiro valor pela base total de horas (o número 24) e adiciono o segundo valor. No
    {				      // no segundo caso se os valores de horas forem iguais adiciono 24 horas (pois se colocasse 0 não	
        difh+=24-h1+h2;		     // existiria duração). No else ( no caso em que o segundo valor de hora será maior que o primeiro) a
    }				    // subtração se dá do segundo valor ( o maior) pelo primeiro (o menor) normalmente. Lembre-se que será
    else if(h1==h2) 		   //levada em conta a subtração ali em cima, pelos operadores "+=". E por fim retorna-se a diferença de horas
    {				  //"difh".
	difh+=24;
    }	
    else
    {
       difh+=h2-h1;
    }
    return difh; 
}
