#include <stdio.h>

void apresentacao();
void resposta();

int main(){
    apresentacao();

    resposta();
return 0;
}

apresentacao(){
    printf("SOMA DE DOIS N�MEROS MODULARIZADA E UTILZANDO PONTEIROS(PASSAGEM POR REFER�NCIA)\n\n");
}

void resposta(float c){
    printf("A soma dos dois n�meros inseridos �: %.2f", c);
}
