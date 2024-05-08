#include <stdio.h>

void apresentacao();
void ler_valorref(float *x, float *y);
float ler_valor();
float calculo(float a, float b, float c);
void resposta(float r);

int main(){
    apresentacao();
    float a, b;
    ler_valorref(&a, &b);
    float c = ler_valor();
    float r = calculo(a, b, c);
    resposta(r);
return 0;
}

void apresentacao(){
    printf("Verificação do número do meio a partir da leitura de três números (usando ponteiros).\n\n");
}

void ler_valorref(float *x, float *y){
    printf("\nDigite aqui o 1º valor: ");
    scanf("%f", x);

    printf("\nDigite aqui o 2º valor: ");
    scanf("%f", y);
}

float ler_valor(){
    float z;
    printf("\nDigite aqui o 3º valor: ");
    scanf("%f", &z);

return z;
}

float calculo(float a, float b, float c){
    if(a > b && b > c || c > b && b > a)
        return b;
    if(b > a && a > c || c > a && a > b)
        return a;
    if(a > c && c > b || b > c && c > a)
        return c;
}

void resposta(float r){
    printf("\n\nO número do meio é: %.1f", r);
}
