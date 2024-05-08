#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/***************************************************************
* Assinatura da fun��o: apresentacao()
* Data da elabora��o: 18-04-2024
* Autor: Gabriel Mayer Clary
* Objetivo: Calcular o per�metro de um quadrado
* Dados de entrada (argumentos): 64
* Dado de sa�da (valor gerado pela fun��o): 256
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
    printf("C�LCULO DO PER�METRO DE UM QUADRADO\n");
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
    printf("\n\nO per�metro do quadrado � de %.2f metros", resultado);
}
