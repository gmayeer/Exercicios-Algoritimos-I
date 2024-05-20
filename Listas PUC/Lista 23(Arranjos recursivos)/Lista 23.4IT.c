        //M�TODO FEITO: FUN��O RETORN�VEL
//M�TODO COMENTADO: FUN��O VAZIA

#include <stdio.h>
#include <stdlib.h>
const int NUM_LIN = 3;
const int NUM_COL = 3;

float* Diagseg(float M[][NUM_COL]); //QUANDO SE QUER RETORNAR VARIAVEIS COMO ENDERE�OS (ARRAYS/MATRIZES) USAR UMA FUN��O-PONTEIRO

//------------
/*void Diagseg(float M[][NUM_COL], float secund[]);*/
//M�todo void dispon�vel nesse caso

int main(){
    printf("ESCRITA DOS ELEMENTOS DA DIAGONAL SECUND�RIA\n\n");
    float M[NUM_LIN][NUM_COL];
    for(int i = 0; i < NUM_LIN; i++){
        for(int j = 0; j < NUM_COL; j++){
            printf("\n%d� linha | %d� coluna: ", (i + 1), (j + 1));
            scanf("%f", &M[i][j]);
        }
    }
    float *resultado = Diagseg(M);

    //---------
    /*float resultado[NUM_LIN]
    Diagseg(M, resultado);*/ // Resultado virou ponteiro automaticamente no m�todo void em sua declara��o

    printf("{");
    for(int r = 0; r < NUM_LIN; r++){
        printf("%.2f|", resultado[r]);
    }
    printf("}");
return 0;
}

float* Diagseg(float M[][NUM_COL]){
    float *secund = (float*)malloc(NUM_LIN*sizeof(float)); //ALOCA��O DE MEM�RIA PARA ARRAYS
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

