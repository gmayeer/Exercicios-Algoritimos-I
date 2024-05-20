//ARRUMAR TESTES DA RECURSIVIDADE

#include <stdio.h>
#include <stdlib.h>
const int NUM_LIN = 3;
const int NUM_COL = 3;

float* Diagseg(float M[][NUM_COL], int i, int j);

int main(){
    printf("ESCRITA DOS ELEMENTOS DA DIAGONAL SECUNDÁRIA(RECURSIVA)\n\n");
    float M[NUM_LIN][NUM_COL];
    for(int i = 0; i < NUM_LIN; i++){
        for(int j = 0; j < NUM_COL; j++){
            printf("\n%dª linha | %dª coluna: ", (i + 1), (j + 1));
            scanf("%f", &M[i][j]);
        }
    }
    float* resultado = Diagseg(M, 0, 0);;

    printf("{");
    for(int r = 0; r < NUM_LIN; r++){
        printf("%.2f|", resultado[r]);
    }
    printf("}");
return 0;
}

float* Diagseg(float M[][NUM_COL], int i, int j){
    float *secund = (float*)malloc(NUM_LIN*sizeof(float));
    int c = 0;
    if(i + j != NUM_LIN - 1){
        secund[c] = *Diagseg(M, i + 1, j);
    }
    else{
        c++;
        secund[c] = M[i][j];
    }

    return secund;
}
