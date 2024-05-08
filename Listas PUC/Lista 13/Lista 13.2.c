#include <stdio.h>
#include <stdlib.h>

void apresentacao();
void ler_numero(float *x, float *y);
void calculo(float *z, float *a, float *b);
void resposta(float *z);

int main(){
    apresentacao();
    float *a = malloc(sizeof(float));
    float *b = malloc(sizeof(float));
    ler_numero(a, b);
    float *z = malloc(sizeof(float));
    calculo(z, a, b);
    resposta(z);
return 0;
}

apresentacao(){
    printf("SOMA DE DOIS NÚMEROS MODULARIZADA E UTILZANDO PONTEIROS(PASSAGEM POR REFERÊNCIA)\n\n");
}

void ler_numero(float *x, float *y){
    printf("Digite aqui o 1º valor real: ");
    scanf("%f", x);

    printf("\nDigite aqui o 2º valor real: ");
    scanf("%f", y);
}

void calculo(float *z, float *a, float *b){
    *z = *a + *b;
}

void resposta(float *z){
    printf("\nA soma dos dois números inseridos é: %.2f", *z);
}
