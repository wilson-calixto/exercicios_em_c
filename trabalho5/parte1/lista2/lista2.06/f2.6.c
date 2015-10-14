#include<string.h>


int is_segment(int n,char *a, char *t ) // verifica se a palavra dada como parâmetro de segmento realmente é um segmento da segunda palavra. dá como retorno a posição final mais 1 caso a ultima letra da palavra seja diferente da primeira , retorna somente a posição final caso seja igual  e retorna 0 caso não haja segmento.
{
    int i, j, cont=0;
    for(i=n;i<strlen(t);i++) // i recebe n que é a posição de início de leitura , i vai até o tamanho da string t e vai incrementando a cada iteração
    {          
        if(a[cont] == t[i]) // se o a na posição do contador que é iniciado no 0, ou seja a primeira letra da string segmento o contador incrementa, logo incrementa a posição.
        {
            cont++;
            if(cont==strlen(a) && a[0] == t[i]) // se o contador for igual ao tamanho da string segmento e a ultima letra for igual a primeira , ele retorna a posição da ultima letra
            {
               return i;
            } 
	        else
	        {
	    	    if(cont==strlen(a)) // se não se só for um segmento sem igualdade é retornada a posição mais um para quando for utilizada em varias iterações verificar pedaços diferentes da palavra
		        {
                    return i+1;
                }
            }
        }
        else
        {
             cont = 0; // contador reseta se a verificação com o a na posição contador der falso
            if(a[cont] == t[i]) // verifica se a verificação dá certo com a primeira letra da string segmento, é como se fosse um reset do ciclo, caso a verificação com o contador incrementado dê errado 
            {
                cont++;
            }

        }           
    }
    return 0;
}


int count_segments(char *a, char *t)
{   
    int count=0 , n=0;
    while(is_segment(n,a,t)) // enquanto a função retornar algo diferente de 0 , ou seja verdadeiro , o contador incrementa 
    {   
        count++;
        n = is_segment(n,a,t); // n recebe a posição que deve começar a procima verificação
    }
    return count;
}

