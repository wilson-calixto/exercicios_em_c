/*
 * =====================================================================================
 *
 *       Filename:  insere_vetor.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  18-09-2015 13:27:36
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
char ***insere_resultado(int npartidas); 
int pesq_matrizes(int ntimes, char* time, char*** tabela);
char ***cria_tabela(int ntimes, int njogos, char*** matriz_resultados);
//void imprime_tabela(int ntimes, char ***tabela);
void gera_dados(int s , char **tabela, char **matriz_resultado);
void ordena_tabela(int ntime , char ***tabela);

