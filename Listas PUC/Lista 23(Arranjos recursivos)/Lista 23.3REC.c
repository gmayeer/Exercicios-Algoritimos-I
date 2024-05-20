//MATRIZ QUADRADA = M[x][y] onde x = y

// NÃO CONSEGUI RESOLVER
//--------------------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>

const int NUM_LIN = 3;
const int NUM_COL = 3;

float menorPos(float M[][NUM_COL], int i, int j);

int main(){
    printf("PESQUISA DE POSIÇÃO DO MENOR ELEMENTO DA MATRIZ(RECURSIVO)\n\n");
    float M[NUM_LIN][NUM_COL];
    for(int i = 0; i < NUM_LIN; i++){
        for(int j = 0; j < NUM_COL; j++){
            printf("\n%dª linha | %dª coluna: ", (i + 1), (j + 1));
            scanf("%f", &M[i][j]);
        }
    }
    float resultado = menorPos(M, 0, 0);

    if(resultado == 1)
        printf("\nO menor valor estava acima da diagonal principal");
    if(resultado == -1)
        printf("\nO menor valor estava abaixo da diagonal principal");
    if(resultado == 0)
        printf("\nO menor valor estava na diagonal principal");
return 0;
}

float menorPos(float M[][NUM_COL], int i, int j){
    float posicao;
    if (i == NUM_LIN && j == NUM_COL) {
        return M[0][0];
    }
    else if (i == 0 && j == 0) {
        return menorPos(M, i + 1, j + 1);
    }
    else{
        float menor = menorPos(M, i + 1, j);
        if (M[i][j] < menor) {
            posicao = -1;
            return M[i][i];
        }
        else {
            return menor;
        }

        menor = menorPos(M, i, j + 1);
        if (M[i][j] < menor) {
            posicao = 1;
            return M[i][j];
        }
        else {
            return menor;
        }

        menor = menorPos(M, i + 1, j + 1);
        if (M[i][j] < menor) {
            posicao = 0;
            return M[i][j];
        }
        else {
            return menor;
        }
    }
} // NÃO CONSEGUI RESOLVER
//--------------------------------------------------------------------------------------------------------------------------------------
