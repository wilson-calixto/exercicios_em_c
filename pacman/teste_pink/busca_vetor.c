int busca_vetor(int vetor_possibilidades[2], int caminho[84][2],int t_vcaminho)
{
          if (t_vcaminho > 0)
          {
                  if (vetor_possibilidades[0] == caminho[t_vcaminho-1][0] && vetor_possibilidades[1] == caminho[t_vcaminho -1][1])
                  {
                          return 1;
                  }
          }
          return 0;
 
}

