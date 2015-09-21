
/* Programacao de Computadores e ALgoritmos
 * Trabalho 4
 * function.c
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
int polynomial(int vet[], int p[], int n, int a, int ind)
{

    int qx; //Variavel que sera retornada
    if(n == ind-1) //Verifica se eh o primeiro coeficiente do polinomio e repete o valor(conforme dispositivo de Briot Ruffini)
    {
        qx = vet[ind]; // Variavel recebe o valor do primeiro vetor
    }
    else
    {
        qx= (p[n+1] * a) + vet[n+1]; //Se nao for o primeiro coeficiente, retorna o vetor resultante x a variavel de "A" enviada pelo usuario, 
    }					//somado com o proximo coeficiente
    return qx; // retorna a variavel
}
