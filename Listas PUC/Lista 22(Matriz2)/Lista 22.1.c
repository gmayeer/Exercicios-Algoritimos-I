#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

const int NUM_LIN = 3;
const int NUM_COL = 3;

void leMatriz(float M[][NUM_COL]){
    for(int i=0; i<NUM_LIN; i++){
        for(int j=0; j<NUM_COL; j++){
            printf("M[%i][%i]: ", i+1, j+1) ;
            scanf("%f", &M[i][j]);
        }
    }
}

bool iguais(float A[][NUM_COL], float B[][NUM_COL]){
    bool saoIguais = false;
    int i=0;
    for(int i=0; i<NUM_LIN; i++){
        for(int j=0; j<NUM_COL; j++){
            if(A[i][j] != B[i][j])
                return saoIguais; //DESSA MANEIRA, NA VERIFICAÇÃO, CASO HAJA AO MENOS 1 ELEMENTO DIFERENTE, A FUNÇÃO E AS ITERAÇÕES JA PARAM INDICANDO QUE AS MATRIZES NÃO SAO IGUAIS
        }
    }
    saoIguais = true;
    return saoIguais;
}
int main() {
    float M1[NUM_LIN][ NUM_COL];
    leMatriz(M1);
    float M2[NUM_LIN][ NUM_COL];
    leMatriz(M2);
    if(iguais(M1, M2))
        printf("\nMatrizes iguais!");
    else
        printf("\nMatrizes diferentes!");

return 0;
}
