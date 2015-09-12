/*Programacao de Computadores e Algoritmos / Laboratorio de Programacao de Computadores
 *
 * Trabalho 2
 * Lista 2
 * Questao 16
 *
 *\Equipe:  Elizabeth Castro
 *          Andreza Moreira
 *          Juliany Raiol
 *          Luana Andrade
 *          Wilson Neto
 *
 *
 * / */

int fat(int n)
{
    int fatorial;


    //numero de parametro vai decrementando
    //ate chegar a 2
    for(fatorial=1;n>1;n--)
    {

        fatorial=fatorial*n;

    }

    //retorna o fatorial do numero
    return fatorial;
}
