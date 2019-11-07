#include <stdio.h>
#include "knap.h"
#define len(x) sizeof(x)/sizeof(x[0])


int main(void) {
  int peso[5] = {1,3,4,5,2};
  int valor[5] = {1,4,5,7,4};
  int capacidade = 9;
  // awnser = 13

  int valor_1[] = {60,100,120};
  int peso_1[] = {10,20,30};
  
  int valor_2[] = {1,4,5,7,4};
  int peso_2[] = {1,3,4,5,2};
  
  int valor_3[] = {92,57,49,68,60,43,67,84,87,72};
  int peso_3[] = {23,31,29,44,53,38,63,85,89,82};
  
  int peso_4[] = {12,7,11,8,9};
  int valor_4[] = {24,13,23,15,16,51};

  int x = knap(peso,valor,len(peso), capacidade);
  printf("x = %d\n", x);
  printf("%d\n", knap(peso_1,valor_1, len(peso_1), 50));
  printf("%d\n", knap(peso_2,valor_2 ,len(peso_2), 9));
  printf("%d\n", knap(peso_3,valor_3, len(peso_3), 165));
  printf("%d\n", knap(peso_4,valor_4, len(peso_4), 26));

  return 0;
}
