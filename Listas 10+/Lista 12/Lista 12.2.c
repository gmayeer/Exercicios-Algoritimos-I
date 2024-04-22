#include <stdio.h>

void apresentacao();
void ler_idade(int *i);
int calculo(int idade);
void resposta(int r);

int main(){
    apresentacao();
    int idade;
    ler_idade(&idade);
    int r = calculo(idade);
    resposta(r);
return 0;
}

void apresentacao(){
    printf("CÁLCULO DE DIAS VIVIDOS(usando ponteiros)\n\n");
}

void ler_idade(int *i){
    printf("Digite aqui a sua idade: ");
    scanf("%d", i);
}

int calculo(int idade){
    int d = idade * 365;
return d;
}

void resposta(int r){
    printf("\n\nAté o seu último aniversário, você viveu %d dias", r);
}
