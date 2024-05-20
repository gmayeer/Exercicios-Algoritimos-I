#include <stdio.h>
#include <stdbool.h>
#define lin 3
#define col 3

bool comparaMatriz(float M[][col], float N[][col]);

int main(){
    printf("COMPARANDO MATRIZES\n\n");

    float M[lin][col];
    printf("Leitura da matriz M\n");
    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            printf("\n%da linha | %da coluna: ", (i + 1), (j + 1));
            scanf("%f", &M[i][j]);
        }
    }

    float N[lin][col];
    printf("\nLeitura da matriz N\n");
    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            printf("\n%da linha | %da coluna: ", (i + 1), (j + 1));
            scanf("%f", &N[i][j]);
        }
    }

    if(comparaMatriz(M, N))
        printf("\nMatrizes iguais!");
    else
        printf("\nMatrizes diferentes!");

return 0;
}

bool comparaMatriz(float M[][col], float N[][col]){
    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            if(M[i][j] != N[i][j])
                return false;
        }
    }
return true;
}
