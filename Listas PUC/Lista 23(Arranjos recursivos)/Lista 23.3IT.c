//MATRIZ QUADRADA = M[x][y] onde x = y

#include <stdio.h>

const int NUM_LIN = 3;
const int NUM_COL = 3;

float menorPos(float M[][NUM_COL]);

int main(){
    printf("PESQUISA DE POSIÇÃO DO MENOR ELEMENTO DA MATRIZ\n\n");
    float M[NUM_LIN][NUM_COL];
    for(int i = 0; i < NUM_LIN; i++){
        for(int j = 0; j < NUM_COL; j++){
            printf("\n%dª linha | %dª coluna: ", (i + 1), (j + 1));
            scanf("%f", &M[i][j]);
        }
    }
    float resultado = menorPos(M);

    if(resultado == 1)
        printf("\nO menor valor estava acima da diagonal principal");
    if(resultado == -1)
        printf("\nO menor valor estava abaixo da diagonal principal");
    if(resultado == 0)
        printf("\nO menor valor estava na diagonal principal");
return 0;
}

float menorPos(float M[][NUM_COL]){
    float menor;
    int posicao;
    for(int i = 0; i < NUM_LIN; i++){
            for(int j = 0; j < NUM_COL; j++){
                    if(i == 0 && j == 0){
                        menor = M[i][j];
                        posicao = 0;
                    }
                    else{
                        if(menor > M[i][j]){
                            menor = M[i][j];
                            if(i > j)
                                posicao = -1;
                            if(i < j)
                                posicao = 1;
                            if(i == j)
                                posicao = 0;
                        }
                    }
            }
        }
return posicao;
}
