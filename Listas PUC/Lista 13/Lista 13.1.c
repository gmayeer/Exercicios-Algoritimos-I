#include <stdio.h>
#include <stdlib.h>
void apresentacao();
void resposta(float *r);

int main(){
    apresentacao();

    float *a = malloc(sizeof(float));
    float *b = malloc(sizeof(float));
    float *c = malloc(sizeof(float));
    printf("Digite aqui o 1� n�mero: ");
    scanf("%f", a);

    printf("Digite aqui o 2� n�mero: ");
    scanf("%f", b);

    *c = *a + *b;

    resposta(c);
return 0;
}

apresentacao(){
    printf("SOMA DE DOIS N�MEROS UTILIZANDO ALOCA��O DIN�MICA DE MEM�RIA\n\n");
}

void resposta(float *r){
    printf("A soma dos dois n�meros inseridos �: %.2f", *r);
}
