#include <stdio.h>
#define lin 3
#define col 3

void leMatriz(float M[][col]);

int main(){
    printf("LEITURA DE MATRIZ DE REAIS\n\n");

    float M[lin][col];
    leMatriz(M);


    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            printf("%.1f ", M[i][j]);
        }
        printf("\n");
    }
}

void leMatriz(float M[][col]){
    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            printf("\n%da linha | %da coluna: ", (i + 1), (j + 1));
            scanf("%f", &M[i][j]);
        }
    }
}
