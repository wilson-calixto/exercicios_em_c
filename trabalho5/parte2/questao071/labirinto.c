#include <stdio.h>
#include <stdlib.h>

/**  'tamanho' do labirinto' **/
#define SIZE 8

/** coordenadas do 'destino' **/
#define DI 6
#define DJ 6

char m[SIZE][SIZE];

/** deslocamentos de cada célula vizinha em relação à atual **/
int dx[8] = {-1,-1,-1,0,0,1,1,1};
int dy[8] = {-1,0,1,-1,1,-1,0,1};

void inicia(){
  int i,j;
  for(i=0; i < SIZE; i++)
    for(j=0; j < SIZE; j++) m[i][j] = ' ';
  for(i=0; i < SIZE; i++){
    m[i][0] = '#';
    m[i][7] = '#';
    m[7][i] = '#';
    m[0][i] = '#';
  }
  for(i=0; i < SIZE-2; i++){
    m[2][i] = '#';
    m[4][i+2] = '#';
  }
  m[SIZE-3][2] = '#';
  m[SIZE-3][4] = '#';        
}    

void imprime(){
  int i,j;
  for(i=0; i < SIZE; i++){
    for(j=0; j < SIZE; j++) printf("%c",m[i][j]);
    printf("\n");
  } 
  printf("\n");        
}    

void tenta(int i, int j, char c){
  int k;
  if(m[i][j] == ' '){ /** célula [i][j] vaga **/      
    m[i][j] = c;
    if((i==DI) &&(j==DJ)) { /** chegou à célula destino ? **/
        m[i][j] = '+';
        imprime(); 
    } else { /** tentar na vizinhança **/
      for(k=0; k < 8; k++) tenta(i+dx[k],j+dy[k],'.');
    }
    m[i][j] = ' '; /** desmarca a célula [i][j] **/
  }    
}    

int main(int argc, char *argv[])
{
  inicia();
  tenta(1,1,'*');
  system("PAUSE");	
  return 0;
}

