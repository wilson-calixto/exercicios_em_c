
/* Função com jogadas randomicas de 1 a 9 */
int play_easy_bot(int vetor_posicao[9])
{
    int jogada;
    srand( (unsigned)time(NULL) );
    
    do{
        	jogada=1 + ( rand() % 8 );
	    
    }while((jogada>9 || jogada<1)||!jogada_valida(vetor_posicao,jogada));
 
    return jogada;
 }
