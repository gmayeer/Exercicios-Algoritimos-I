#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/***************************************************************
* Assinatura da função: apresentacao()
* Data da elaboração: 18-04-2024
* Autor: Gabriel Mayer Clary
* Objetivo: Calcular o fatorial de um número natural
* Dados de entrada (argumentos): 6
* Dado de saída (valor gerado pela função): 720
****************************************************************
*/

void apresentacao();
int ler_numero();
int calculo(int a);
void resposta(int resultado);

int main(){
    apresentacao();
    int a = ler_numero();
    int resultado = calculo(a);
    resposta(resultado);
return 0;
}

void apresentacao(){
    printf("CÁLCULO DE FATORIAL DE UM NÚMERO NATURAL\n");
}

int ler_numero(){
    int x;
    printf("\nDigite aqui um número natural: ");
    scanf("%d", &x);
return x;
}

int calculo(int a){
    int x = 1;
    for(int i = 1; i <= a; i++){
        x *= i;
    }
return x;
}

void resposta(int resultado){
    printf("O fatorial do número inserido é: %d", resultado);
}
