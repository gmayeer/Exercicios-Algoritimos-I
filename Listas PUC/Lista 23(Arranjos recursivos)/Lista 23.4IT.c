        //MÉTODO FEITO: FUNÇÃO RETORNÁVEL
//MÉTODO COMENTADO: FUNÇÃO VAZIA

#include <stdio.h>
#include <stdlib.h>
const int NUM_LIN = 3;
const int NUM_COL = 3;

float* Diagseg(float M[][NUM_COL]); //QUANDO SE QUER RETORNAR VARIAVEIS COMO ENDEREÇOS (ARRAYS/MATRIZES) USAR UMA FUNÇÃO-PONTEIRO

//------------
/*void Diagseg(float M[][NUM_COL], float secund[]);*/
//Método void disponível nesse caso

int main(){
    printf("ESCRITA DOS ELEMENTOS DA DIAGONAL SECUNDÁRIA\n\n");
    float M[NUM_LIN][NUM_COL];
    for(int i = 0; i < NUM_LIN; i++){
        for(int j = 0; j < NUM_COL; j++){
            printf("\n%dª linha | %dª coluna: ", (i + 1), (j + 1));
            scanf("%f", &M[i][j]);
        }
    }
    float *resultado = Diagseg(M);

    //---------
    /*float resultado[NUM_LIN]
    Diagseg(M, resultado);*/ // Resultado virou ponteiro automaticamente no método void em sua declaração

    printf("{");
    for(int r = 0; r < NUM_LIN; r++){
        printf("%.2f|", resultado[r]);
    }
    printf("}");
return 0;
}

float* Diagseg(float M[][NUM_COL]){
    float *secund = (float*)malloc(NUM_LIN*sizeof(float)); //ALOCAÇÃO DE MEMÓRIA PARA ARRAYS
    int c = 0;
    for(int i = 0; i < NUM_LIN; i++){
            for(int j = 0; j < NUM_COL; j++){
                    if(i + j == NUM_LIN - 1){
                        secund[c] = M[i][j];
                        c++;
                    }
            }
        }
return secund;
}

//---------
/*void Diagseg(float M[][NUM_COL], float secund[]){
    int c = 0;
    for(int i = 0; i < NUM_LIN; i++){
        for(int j = 0; j < NUM_COL; j++){
            if(i + j == NUM_LIN - 1){
                secund[c] = M[i][j];
                c++;
            }
        }
    }
}*/

