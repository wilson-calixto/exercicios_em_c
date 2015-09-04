/* 
 * Função para calcular a potencia
 * recebe dois inteiros x e z
 * e retorna um inteiro pot
 */

int calc_pow(int x, int z)
{
    int i, pot;

    pot=1;

    for ( i = 0; i < z; i++ )
    {
        pot*=x;
    }

    return pot;
}
