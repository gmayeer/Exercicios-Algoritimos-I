#include <stdio.h>
//INCOMPLETO
void trocaVet(float V[], int size);

int main(){
    printf("TROCA DE POSIÇÃO DE ELEMENTOS DE ARRAYS(MENOR PARA PRIMEIRO)\n\n");
    float V[100];

    int size = 0;
    do{
        printf("Digite aqui o %d elemento da array[-1 PARA ENCERRAR LEITURA]: ", (size + 1));
        scanf("%f", &V[size]);
        if(V[size] != -1)
            size++;
    }while(V[size] != -1);
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
    float aux, aux2;
    for(int i = 0; i < size; i++){
        if(i == 0)
            aux = V[i];
        else{
            if(V[i] < aux){
                V[i-1] = V[i];
                V[i] = aux;

            }
        }
    }

}
