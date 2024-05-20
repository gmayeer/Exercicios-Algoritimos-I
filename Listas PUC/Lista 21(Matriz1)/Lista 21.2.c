#include <stdio.h>
#define lin 3
#define col 3

void copiaMatriz(float M[][col], float N[][col]);

int main(){
    printf("COPIAR UMA MATRIZ\n\n");

    float M[lin][col];
    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            printf("\n%da linha | %da coluna: ", (i + 1), (j + 1));
            scanf("%f", &M[i][j]);
        }
    }

    float N[lin][col];
    copiaMatriz(M, N);


    printf("M:\n");
    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            printf("%.1f ", M[i][j]);
        }
        printf("\n");
    }

    printf("N:\n");
    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            printf("%.1f ", N[i][j]);
        }
        printf("\n");
    }
}

void copiaMatriz(float M[][col], float N[][col]){
    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            N[i][j] = M[i][j];
        }
    }
}
