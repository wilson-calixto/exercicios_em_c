/* Esta função recebe o valor de uma prestação e a qtde de dias de atraso. 
Retorna o valor da prestação mais multa de 3% do valor, mas 1% por cada dia de atraso.*/

float valor_pagamento(float x, float y){
    if (y==0)
        return x;
    else
        return x+(x*0.03)+x*(0.01*y);
}


/* Esta função recebe um número e retorna  qtde de divisores deste número.*/
int div_cont(x){
    int i,cont=0;
    for (i=1;i<=x;i++){
        if (x%i==0)
        cont++;   
   }
    return cont;
}
