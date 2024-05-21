#include <stdio.h>

void trocaVet(float V[], int size);

int main(){
    printf("TROCA DE POSIÇÃO DE ELEMENTOS DE ARRAYS(MENOR PARA PRIMEIRO)\n\n");

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
    float menor;
    int posmenor;
    for(int i = 0; i < size; i++){
        if(i == 0)
            menor = V[i];
        else{
            if(menor > V[i]){
                menor = V[i];
                posmenor = i;
            }
        }
    }
    float aux = V[0];
    V[0] = menor;
    V[posmenor] = aux;
}
