#include <stdio.h>

void apresentacao();
void resposta();

int main(){
    apresentacao();

    resposta();
return 0;
}

apresentacao(){
    printf("SOMA DE DOIS NÚMEROS MODULARIZADA E UTILZANDO PONTEIROS(PASSAGEM POR REFERÊNCIA)\n\n");
}

void resposta(float c){
    printf("A soma dos dois números inseridos é: %.2f", c);
}
