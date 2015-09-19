/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 4
 * lista2.5
 *
 * Equipe:
 *
 *          Jackson Gomes
 *          Paulo Marinho
 *          Hermann
 *          Elizabeth
 *          Jailson
 */

/* Faça um programa para resolver o seguinte problema: 
São dadas as coordenadas reais x e y de um ponto, um número natural n, e as coordenadas reais de n pontos (1 < n < 100). Deseja-se calcular e imprimir sem repetição os raios das circunferências centradas no ponto (x,y) que passam por pelo menos um dos n pontos dados.*/ 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
  float x, y;
  float dist;
} ponto;

int main() {

  ponto c,*v;
  int n,i,j,achou;

  printf("Digite as coordenadas do centro:\n");
  scanf("%f %f", &(c.x), &(c.y));
  c.dist = 0;

  printf("Digite o numero de pontos:\n");
  scanf("%d", &n);

  while (n <= 1 || n >= 100) {
    printf("Digite novamente:\n");
    scanf("%d", &n);
  }

  v = (ponto *) malloc(sizeof(ponto)*n);

  printf("Digite as coordenadas dos pontos:\n");
  for (i = 0; i < n; i++) {
    scanf("%f %f", &(v[i].x), &(v[i].y));
    v[i].dist = sqrt((c.x-v[i].x)*(c.x-v[i].x) + (c.y-v[i].y)*(c.y-v[i].y));
  }

  printf("Raios das circunferencias:\n");

  for (i = 0; i < n; i++) {
    achou = 0;
    for (j = 0; j < i; j++) {
      if (v[i].dist == v[j].dist) {
	achou = 1;
	break;
      }
    }
    if (achou == 0) {
      printf("%f\n", v[i].dist);
    }
  }

  free(v);
  v = NULL;

  return(1);
}
