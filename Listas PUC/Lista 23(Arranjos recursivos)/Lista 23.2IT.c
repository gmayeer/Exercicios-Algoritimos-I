#include <stdio.h>

const int NUM_LIN = 3;
const int NUM_COL = 3;

float maiorDiag(float M[][NUM_COL]);

int main(){
    printf("CALCULAR O MAIOR N�MERO NA DIAGONAL PRINCIPAL DA MATRIZ\n\n");
    float M[NUM_LIN][NUM_COL];
    for(int i = 0; i < NUM_LIN; i++){
        for(int j = 0; j < NUM_COL; j++){
            printf("\n%d� linha | %d� coluna: ", (i + 1), (j + 1));
            scanf("%f", &M[i][j]);
        }
    }
    float resultado = maiorDiag(M);

    printf("O maior n�mero da diagonal principal da matriz �: %.2f", resultado);
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
        } //PODE-SE FAZER A VERIFICA��O DE DIAGONAIS APENAS COM UM FOR, POIS S�O VALORES IGUAIS, ENT�O SEMPRE i = i
return maior;
}
