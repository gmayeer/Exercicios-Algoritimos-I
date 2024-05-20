#include <stdio.h>
#include <stdbool.h>
#define lin 3
#define col 3

void comparaMatriz(float M[][col], float N[][col]);

int main(){
    printf("TRANSPONDO MATRIZ M\n\n");

    float M[lin][col];
    printf("Leitura da matriz M\n");
    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            printf("\n%da linha | %da coluna: ", (i + 1), (j + 1));
            scanf("%f", &M[i][j]);
        }
    }

    float N[lin][col];
    transpMatriz(M, N);

    printf("\nTRANSPOSTA:\n");
    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            printf("%.1f ", N[i][j]);
        }
        printf("\n");
    }
return 0;
}

void transpMatriz(float M[][col], float N[][col]){
    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            N[i][j] = M[j][i];
        }
    }
}
