#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/***************************************************************
* Assinatura da função: apresentacao()
* Data da elaboração: 17-04-2024
* Autor: Gabriel Mayer Clary
* Objetivo: Calcular o maior valor entre dois lidos
* Dados de entrada (argumentos): -87.66732 ; 0.22293
* Dado de saída (valor gerado pela função): 0.22293
****************************************************************
*/

void apresentacao();
float ler_valor();
float comparacao(float a, float b);
void resposta(float maior);



int main(){
    apresentacao();
    float a = ler_valor();
    float b = ler_valor ();
    float maior = comparacao(a, b);
    resposta(maior);
return 0;
}

void apresentacao(){
    printf("Maior número real entre dois inteiros\n\n");
}

float ler_valor(){
    float x;
    printf("Digite aqui um número real: ");
    scanf("%f", &x);
    return x;
}

float comparacao(float a, float b){
    float i;
    if(a > b)
        i = a;
    else
        i = b;

    return i;
}

void resposta(float maior){
    printf("Dentre os dois números lidos, %.2f é maior.", maior);
}
