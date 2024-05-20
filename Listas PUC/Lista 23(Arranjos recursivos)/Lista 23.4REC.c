//ARRUMAR TESTES DA RECURSIVIDADE

#include <stdio.h>
#include <stdlib.h>
const int NUM_LIN = 5;
const int NUM_COL = 5;

void Diagseg(float M[][NUM_COL], float secund[], int i, int j);

int main(){
    printf("ESCRITA DOS ELEMENTOS DA DIAGONAL SECUND�RIA(RECURSIVA)\n\n");
    float M[NUM_LIN][NUM_COL];
    for(int i = 0; i < NUM_LIN; i++){
        for(int j = 0; j < NUM_COL; j++){
            printf("\n%d� linha | %d� coluna: ", (i + 1), (j + 1));
            scanf("%f", &M[i][j]);
        }
    }
    float resultado[NUM_LIN]; //RESULTADO DECLARADO COMO PONTEIRO E REFERENCIANDO PARA ARRAY SECUND[]
    Diagseg(M, resultado, 0, NUM_COL - 1); //LINHA � REFERENCIADA COMO 0 E COLUNA COMO A ULTIMA COLUNA, COMO � A DIAGONAL SECUNDARIA, ELA SEGUE O CAMINHO CONTRARIO (i++ e j--)

    printf("{");
    for(int r = 0; r < NUM_LIN; r++){
        printf("%.2f|", resultado[r]);
    }
    printf("}");
return 0;
}

void Diagseg(float M[][NUM_COL], float secund[], int i, int j){
    if (i >= NUM_LIN || j < 0) //TESTE DO CASO BASE
        return;

    secund[i] = M[i][j]; //COMPLEMENTA��O DA ARRAY USANDO A LINHA (S� SE PODE TER UM ELEMENTO DA DIAGONAL SECUND�RIA NA MATRIZ). REGISTRO ORIENTADO PELA LINHA QUE EST� SENDO CHECADA.
    Diagseg(M, secund, i + 1, j - 1); //RECURS�O QUE USA O TESTE SOMANDO E SUBTRAINDO UM LADO E UMA COLUNA
}

