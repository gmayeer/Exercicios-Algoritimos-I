#include <stdio.h>
#include <stdlib.h>
#define NUM_LIN 3
#define NUM_COL 3

float *somaCol(float V[NUM_LIN][NUM_COL]);

int main() {
  printf("Soma colunas\n\n");
  float V[NUM_LIN][NUM_COL];
  float S;
  for(int i = 0; i < NUM_LIN; i++){
      for(int j = 0; j < NUM_COL; j++){
        printf("%d linha e %d coluna: ", (i+1), (j+1));
        scanf("%f", &V[i][j]);
      }
  }

  float *resposta = somaCol(V);
  
  for(int c = 0; c < NUM_COL; c++){
    if(c < NUM_COL - 1)
      printf("%.2f|", resposta[c]);
    else
      printf("%.2f", resposta[c]);
  }
  return 0;
}

float *somaCol(float V[NUM_LIN][NUM_COL]) {
  float *somacol = malloc(NUM_COL * sizeof(float));
    for(int j = 0; j < NUM_LIN; j++){
      somacol[j] = 0;
      for(int i = 0; i < NUM_COL; i++){
        somacol[j] += V[i][j];
      }
  }
  return somacol;
} 

