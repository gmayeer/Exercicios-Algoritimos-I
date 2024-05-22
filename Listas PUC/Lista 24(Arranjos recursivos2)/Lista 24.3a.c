#include <stdio.h>
#define NUM_LIN 3
#define NUM_COL 3

int linhaMaior(int V[NUM_LIN][NUM_COL]);

int main() {
  printf("LINHA DO MAIOR NUMERO\n\n");
  int V[NUM_LIN][NUM_COL];
  for(int i = 0; i < NUM_LIN; i++){
      for(int j = 0; j < NUM_COL; j++){
        printf("%d linha e %d coluna: ", (i+1), (j+1));
        scanf("%d", &V[i][j]);
      }
  }

  int resposta = linhaMaior(V);

  printf("O maior número estava na linha: %d", resposta + 1);
  return 0;
}

int linhaMaior(int V[NUM_LIN][NUM_COL]){
  int linha, maior;
  for(int i = 0; i < NUM_LIN; i++){
      for(int j = 0; j < NUM_COL; j++){
        if(j == 0 && i == 0){
          maior = V[i][j];
        }
        else if(maior < V[i][j]){
          maior = V[i][j];
          linha = i;
        }
      }
  }
  return linha;
}