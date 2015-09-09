int funcPrimo(int a)
{
    int  i,  vezes = 0, valor;
    for (i = 1; i <= a && vezes <= 3; i++)//for (i = 1; i <= num; i++)
    {  
        if (a % i == 0)//Se o numero dividido pela variavel i for 0, é primo
        vezes ++;//contador de numero dividos que dão 0
    }
    
    if (vezes == 2)//Se os numero divididos que dão 0 só forem 2, será True (1)
    {
     valor = 1;//"1" == True
    }
    else//Caso tenha mais de 2 numero divididos que dão 0, ele não será primo
    {
     valor = 0;//"0" == False
    }
    
    return valor;//retorna "1" (True) ou "0" (False) sobre ter ou não número primos
}
