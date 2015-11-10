void verifica_direcao(char lab[23][30],int  cordenadas[2],int caminho[100][2],int tamanho,int x_pacman,int y_pacman)
{
          int x,y,i=0,s, menor_score=999,menor_indice=5,compara_score_number ;
          int vetor_possibilidades[4][2];
          y = cordenadas[0];
          x = cordenadas[1];
 
          if (x+1 < 30)
          {
                  if (lab[y][x+1] !=  '0'  )
                  {
                          //cordenadas[1] = x+1;
                          vetor_possibilidades[i][0] = y;
                          vetor_possibilidades[i][1] = x+1;
                          i++;
                  }
          }
          if (y+1 < 23)
          {
                  if (lab[y+1][x] != '0' )
                  {
                          vetor_possibilidades[i][0] = y+1;
                          vetor_possibilidades[i][1] = x;
                          i++;
                          //cordenadas[0] = y+1;
 
                  }
          }
          if (x-1>=0)
          {
                  if (lab[y][x-1] != '0' )
                  {
                          //cordenadas[1] = x-1;
                          vetor_possibilidades[i][0] = y;
                          vetor_possibilidades[i][1] = x-1;
                          i++;
                  }
          }
	  if (y-1 >= 0)
          {
                 if (lab[y-1][x] != '0' )
                 {
                         //cordenadas[0] = y-1;
                         vetor_possibilidades[i][0] = y-1;
                         vetor_possibilidades[i][1] = x;
                         i++;
                 }
         }

         for (s=0;s<i;s++)
         {
                 if (!busca_vetor(vetor_possibilidades[s],caminho,tamanho))
                 {
                         compara_score_number = compara_score(vetor_possibilidades[s],x_pacman,y_pacman);
                         if (compara_score_number < menor_score)
                         {
                                 menor_score  = compara_score_number;
                                 menor_indice = s;
                         }
                 }
         }
         cordenadas[0] = vetor_possibilidades[menor_indice][0];
         cordenadas[1] = vetor_possibilidades[menor_indice][1];
}

