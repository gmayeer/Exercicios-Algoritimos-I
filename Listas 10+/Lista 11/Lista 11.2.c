#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/***************************************************************
* Assinatura da função: apresentacao()
* Data da elaboração: 18-04-2024
* Autor: Gabriel Mayer Clary
* Objetivo: Calcular o perímetro de um quadrado
* Dados de entrada (argumentos): 64
* Dado de saída (valor gerado pela função): 256
****************************************************************
*/

void apresentacao();
float ler_lado();
float calculo(float a);
void resposta(float resultado);

int main(){
    apresentacao();
    float a = ler_lado();
    float resultado = calculo(a);
    resposta(resultado);
return 0;
}

void apresentacao(){
    printf("CÁLCULO DO PERÍMETRO DE UM QUADRADO\n");
}

float ler_lado(){
    float x;
    printf("\nDigite aqui o comprimento de lado do quadrado (em metros): ");
    scanf("%f", &x);
return x;
}

float calculo(float a){
    float y;
    y = a * 4;
return y;
}

void resposta(float resultado){
    printf("\n\nO perímetro do quadrado é de %.2f metros", resultado);
}
