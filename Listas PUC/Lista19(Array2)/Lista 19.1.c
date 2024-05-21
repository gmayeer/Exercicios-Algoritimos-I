#include <stdio.h>

void trocaVet(float V[], int size);

int main(){
    printf("TROCA DE POSIÇÃO DE ELEMENTOS DE ARRAYS\n\n");

    int size;
    printf("Digite aqui o tamanho da array a ser trabalhada: ");
    scanf("%d", &size);
    float V[size];

    for(int j = 0; j < size; j++){
        printf("Digite aqui o %d elemento da array: ", (j+1));
        scanf("%f", &V[j]);
    }
    trocaVet(V, size);

    printf("\n\nApós as trocas, a array ficou assim: [");
        for(int i = 0; i < size; i++){
            if(i != (size - 1)){
                printf("%.2f|", V[i]);
            }
            else
                printf("%.2f", V[i]);
        }
    printf("]");
return 0;
}

void trocaVet(float V[], int size){
    float aux = V[0];
    V[0] = V[size - 1];
    V[size - 1] = aux;
}
