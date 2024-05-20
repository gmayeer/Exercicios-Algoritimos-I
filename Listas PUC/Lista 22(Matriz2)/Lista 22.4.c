#include <stdio.h>

const int NUM_LIN = 3;
const int NUM_COL = 3;

float mediaAcimaDiag(float V[][NUM_COL]);

int main(){
    printf("MÉDIA DE VALORES ACIMA DA DIAGONAL DE UMA MATRIZ\n\n");

    float V[NUM_LIN][NUM_COL];

    for(int i = 0; i < NUM_LIN; i++){
        for(int j = 0; j < NUM_COL; j++){
            printf("\n%dª linha e %dª coluna: ", (i+1), (j+1));
            scanf("%f", &V[i][j]);
        }
    }

    float resultado = mediaAcimaDiag(V);

    printf("A média dos valores acima da diagonal principal da matriz é: %.2f", resultado);
return 0;
}

float mediaAcimaDiag(float V[][NUM_COL]){
    float soma = 0;
    int contador = 0;
    for(int i = 0; i < NUM_LIN; i++){
        for(int j = 0; j < NUM_COL; j++){
            if(i != j && i < j){
                contador++;
                soma += V[i][j];
            }
        }
    }

    float media = soma / (float)contador;
return media;
}
