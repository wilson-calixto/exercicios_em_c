
/* Programacao de Computadores e ALgoritmos
 * Trabalho 4
 * functions.c
 *
 * Equipe:
 *
 *          Paulo Henrique
 *          Rai Santos
 *          Jackson Kelvin
 *          Wilson Calisto
 *          Ewerton Petillo
 *          
 */
//Soma segmentada - Verifica a maior soma dos termo do vetor
int sum_position(int vet[],int pos, int ter) //Soma determinda posicoes
{
    int i, sum = 0;
    for (i=0; i<=ter; i++)
    {
        sum = sum + vet[pos+i]; // Vai somando posicao por posicao
    }
    return sum;
}

int sum_max(int vet[], int max) //Retorna a soma maxima
{
    int pos, term, sum=0, new_sum;
    for(pos=0; pos<max; pos++)
    {
        for (term = 1; term< max-pos; term++)
        {
             new_sum = sum_position(vet, pos, term); // A nova soma recebe sempre a funcao acima
             if(new_sum > sum) //Verifica se a nova soma eh maior que a soma atual
             {
                sum = new_sum; //Se sim a soma atual recebe a nova soma
             }
        } //Se a nova soma for menor que a atual a funcao vai retornar sempre a ultima soma, ou seja a maior
    }
    return sum;
}
