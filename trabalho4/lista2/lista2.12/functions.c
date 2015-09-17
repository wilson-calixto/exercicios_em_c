
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

int sum_position(int vet[],int pos, int ter)
{
    int i, sum = 0;
    for (i=0; i<ter; i++)
    {
        sum = sum + vet[pos+i];
    }
    return sum;
}

int sum_max(int vet[], int max)
{
    int pos, term, sum=0, new_sum;
    for(pos=0; pos<max; pos++)
    {
        for (term = 1; term< max-pos; term++)
        {
             new_sum = sum_position(vet, pos, term);
             if(new_sum > sum)
             {
                sum = new_sum;
             }
        }
    }
}
