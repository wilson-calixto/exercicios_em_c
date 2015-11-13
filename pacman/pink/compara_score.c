int compara_score(int vetor_possibilidades[2],int x_pacman,int y_pacman )
  {
          int x,y;
          if (vetor_possibilidades[0] > y_pacman)
          {
                  y = vetor_possibilidades[0] - y_pacman;
          }else
          {
                  y = y_pacman - vetor_possibilidades[0];
          }
 
          if (vetor_possibilidades[1] > x_pacman)
          {
                  x = vetor_possibilidades[1] - x_pacman;
          }else
          {
                  x = x_pacman - vetor_possibilidades[1];
          }
 
          return x+y;
  }

