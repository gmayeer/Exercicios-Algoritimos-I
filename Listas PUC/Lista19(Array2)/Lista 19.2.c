#include <stdio.h>

void trocaVet(float V[], int size, int t1, int t2);

int main(){
    printf("TROCA DE POSIÇÃO DE ELEMENTOS DE ARRAYS(ESCOLHIDO)\n\n");

    int size;
    printf("Digite aqui o tamanho da array a ser trabalhada: ");
    scanf("%d", &size);
    float V[size];

    for(int j = 0; j < size; j++){
        printf("Digite aqui o %d elemento da array: ", (j+1));
        scanf("%f", &V[j]);
    }
    int t1, t2;
    printf("\nTrocar posição: ");
    scanf("%d", &t1);
    printf("\nPela posiçao: ");
    scanf("%d", &t2);
    trocaVet(V, size, t1, t2);

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

void trocaVet(float V[], int size, int t1, int t2){
    float aux = V[t1 - 1];
    V[t1 - 1] = V[t2 - 1];
    V[t2 - 1] = aux;
}
