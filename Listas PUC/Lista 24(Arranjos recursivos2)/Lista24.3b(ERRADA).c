#include <stdio.h>
//INCOMPLETA E ERRADA
#define NUM_LIN 3
#define NUM_COL 3

int linhaMaior(int V[NUM_LIN][NUM_COL], int i, int j);

int main() {
  printf("LINHA DO MAIOR NUMERO(RECURSIVO)\n\n");
  int V[NUM_LIN][NUM_COL];

  for(int i = 0; i < NUM_LIN; i++){
      for(int j = 0; j < NUM_COL; j++){
        printf("%d linha e %d coluna: ", (i+1), (j+1));
        scanf("%d", &V[i][j]);
      }
  }

  int resposta = linhaMaior(V, 0, 0);
  
  printf("O maior número estava na linha: %d", resposta + 1);
  return 0;
}

int linhaMaior(int V[NUM_LIN][NUM_COL], int i, int j) {
  if (i == NUM_LIN) {
    return 0;
  }

  if (j == NUM_COL - 1) {
    return i;
  }

  int abaixo = linhaMaior(V, i + 1, j);
  int direita = linhaMaior(V, i, j + 1);//DECLARAÇÃO DA RECURSÃO DE LINHAS E COLUNAS COMO VARIÁVEL PARA FACILITAR O CÓDIGO

  if (abaixo != -1 && V[i][j] < V[abaixo][j]) {
    return abaixo; //CHECANDO LINHAS
  }

  if (direita != -1 && V[i][j] < V[i][direita]) {
    return i;//CHECANDO COLUNAS
  }
  //A REPETIÇÃO DESSES IF'S EQUIVALEM A UM FOR DENTRO DE UM FOR.

  return -1;
} 