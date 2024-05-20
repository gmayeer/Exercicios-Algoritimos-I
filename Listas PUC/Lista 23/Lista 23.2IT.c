#include <stdio.h>

const int NUM_LIN = 3;
const int NUM_COL = 3;

float maiorDiag(float M[][NUM_COL]);

int main(){
    printf("CALCULAR O MAIOR NÚMERO NA DIAGONAL PRINCIPAL DA MATRIZ\n\n");
    float M[NUM_LIN][NUM_COL];
    for(int i = 0; i < NUM_LIN; i++){
        for(int j = 0; j < NUM_COL; j++){
            printf("\n%dª linha | %dª coluna: ", (i + 1), (j + 1));
            scanf("%f", &M[i][j]);
        }
    }
    float resultado = maiorDiag(M);

    printf("O maior número da diagonal principal da matriz é: %.2f", resultado);
return 0;
}

float maiorDiag(float M[][NUM_COL]){
    float maior;
    for(int i = 0; i < NUM_LIN; i++){
            for(int j = 0; j < NUM_COL; j++){
                if(i == j){
                    if(i == 0)
                        maior = M[i][j];
                    else{
                        if(M[i][j] > maior)
                            maior = M[i][j];
                    }
                }
            }
        } //PODE-SE FAZER A VERIFICAÇÃO DE DIAGONAIS APENAS COM UM FOR, POIS SÃO VALORES IGUAIS, ENTÃO SEMPRE i = i
return maior;
}
