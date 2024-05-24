#include <stdio.h>
#include <stdlib.h>

#define NUM_LIN 3
#define NUM_COL 3

float somaCol(float V[NUM_LIN][NUM_COL], int i, int j);

int main() {
    printf("Soma colunas (RECURSIVO)\n\n");
    float V[NUM_LIN][NUM_COL];

    for (int i = 0; i < NUM_LIN; i++) {
        for (int j = 0; j < NUM_COL; j++) {
            printf("%d linha e %d coluna: ", (i + 1), (j + 1));
            scanf("%f", &V[i][j]);
        }
    }

    float *soma = (float *)malloc(NUM_COL * sizeof(float));

    for (int j = 0; j < NUM_COL; j++) {
        soma[j] = somaCol(V, 0, j);
    }

    for (int c = 0; c < NUM_COL; c++) {
        if (c < NUM_COL - 1)
            printf("%.2f|", soma[c]);
        else
            printf("%.2f", soma[c]);
    }
    printf("\n");

    return 0;
}

float somaCol(float V[NUM_LIN][NUM_COL], int i, int j) {
    if (i == NUM_LIN) {
        return 0;
    }
    return V[i][j] + somaCol(V, i + 1, j);
}

