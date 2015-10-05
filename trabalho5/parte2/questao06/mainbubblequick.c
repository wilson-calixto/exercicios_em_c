 /*
 *  *  Programação de Computadores e Algoritmos
 *     Trabalho 5
 *     Questão 5.03
 *     Equipe: 
 *     Benjamin Borges
 *     Jackson Gomes
 *     Richardson Souza
 *     Luiz Brandão
 *     Wilson Calixto
 */


//Bibliotecas utilizadas
#include <stdio.h>
#include <stdlib.h>
#include "quick.c"
 
#ifdef WIN32  //se for windows
  #define limpa_tela system("cls") //limpa tela
#else //senão, ex.: linux
  #define limpa_tela system("/usr/bin/clear") //limpa tela
#endif
 
main(){
  //declaração de variáveis
  int nPos=0, nAux=0;
  int nInd=0, nAtual=0;
  int nTroca=0, nChave=0;
 
  //Quantidade de casas do vetor
  while((nPos<=0)||(nPos>100)){
    printf("\nQuantos numeros tera o vetor? ");
    scanf("%d",&nPos);
  }
 
  //criando o vetor
  int nVetor[nPos], nOrig[nPos], nOpc=-1;
 
  //preenchendo os dados do vetor
  for(nAux=0;nAux<=nPos-1;nAux++){
    printf("\nInsira o numero %d: ",nAux+1);
    scanf("%d",&nVetor[nAux]);
    nOrig[nAux]=nVetor[nAux];
  }
 
  limpa_tela; //limpando a tela
 
  while((nOpc<=0)||(nOpc>=3)){
    printf("\n > Menu:");
    printf("\n  1. Troca    | Bubble Sort");
     printf("\n  2. Referência  | QuickSort");
    printf("\n > Resposta: ");
    scanf("%d",&nOpc);
  }
 
  printf("\nOrdenando:\n");
  int i, j, t, m;
  if (nOpc==1){
    //bubble - troca
    nTroca = nPos - 1 ;
    for(nInd = 0; nInd < nPos; nInd++)
    {
      for(nAux=0;nAux<=nPos-1;nAux++){
        printf("[%d]",nVetor[nAux]);
      }
 
      for(nAtual = 0; nAtual < nTroca; nAtual++)
      {
        if(nVetor[nAtual] > nVetor[nAtual+1])
        {
          nAux = nVetor[nAtual];
          nVetor[nAtual] = nVetor[nAtual+1];
          nVetor[nAtual+1]=nAux;
        }
      }
      nTroca--;
      printf("\n");
    }
  }else{
	if(nOpc==2){ 
		Quick(nVetor,0,nPos);	
	}
     }
  //Resultado - Vetor Original
  printf("\nOriginal: ");
  for(nAux=0;nAux<=nPos-1;nAux++){
    printf("[%d]",nOrig[nAux]);
  }
 
  //Resultado - Vetor Ordenado
  printf("\nOrdenada: ");
  for(nAux=0;nAux<=nPos-1;nAux++){
    printf("[%d]",nVetor[nAux]);
  }
 
  //limpando os dados e esperando o usuario apertar -Enter-
  getchar();
  printf("\n\nPressione -Enter- para finalizar!\n\n");
  getchar();
}
