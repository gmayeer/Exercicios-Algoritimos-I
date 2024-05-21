#include <stdio.h>

void trocaVet(float V[], int size);

int main(){
    printf("DEIXAR A ARRAY EM ORDEM\n\n");
    float V[100];

    int size = 0;
    do{
        printf("Digite aqui o %d elemento da array[-1 PARA ENCERRAR LEITURA]: ", (size + 1));
        scanf("%f", &V[size]);
        if(V[size] != -1)
            size++;
    }while(V[size] != -1);
    size--;
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
    float aux;
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < (size - 1 - i); j++){ //PARTE DO MEIO DO FOR É UMA CONDICIONAL, NÃO UM LIMITE (SERVE QUERENDO OU NAO COMO)
            if(V[j] > V[j+1]){
                aux = V[j];
                V[j] = V[j + 1];
                V[j+1] = aux;
            }
        }
    }
}

//MÉTODO BUBBLE SORT UTILIZADO
