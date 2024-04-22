#include <stdio.h>

void apresentacao();
void resposta(float c);

int main(){
    apresentacao();

    float *a = malloc(sizeof(float));
    float *b = malloc(sizeof(float));

    printf("Digite aqui o 1º número: ");
    scanf("%f", a);

    printf("Digite aqui o 2º número: ");
    scanf("%f", b);

    float c = *a + *b;

    resposta(c);
return 0;
}

apresentacao(){
    printf("SOMA DE DOIS NÚMEROS UTILIZANDO ALOCAÇÃO DINÂMICA DE MEMÓRIA\n\n");
}

void resposta(float c){
    printf("A soma dos dois números inseridos é: %.2f", c);
}
