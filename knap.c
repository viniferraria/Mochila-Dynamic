#include "knap.h"

int knap(int peso[], int valor[], int n, int capacidade){
  int max = 0;
  int peso_total = 0;
  for(int i = 0; i<n; i++){
      int a = 0;
      peso_total = 0;
    for(int j = i; j<n; j++){
      if(peso[j] + peso_total <= capacidade){
        a += valor[j];
        peso_total += peso[j]; 
      }
    }
    max = (a > max) ? a : max;
  }
  return max;
}