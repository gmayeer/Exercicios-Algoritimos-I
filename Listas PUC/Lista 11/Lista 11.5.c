#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/***************************************************************
* Assinatura da fun��o: apresentacao()
* Data da elabora��o: 18-04-2024
* Autor: Gabriel Mayer Clary
* Objetivo: Calcular a potencia��o
* Dados de entrada (argumentos): base: 15
                                 expoente: 3
* Dado de sa�da (valor gerado pela fun��o): 3375
****************************************************************
*/

void apresentacao();
int ler_base();
int ler_exp();
int calculo(int b, int e);
void resposta(int resultado);

int main(){
    apresentacao();
    int b = ler_base();
    int e = ler_exp();
    int resultado = calculo(b, e);
    resposta(resultado);
return 0;
}

void apresentacao(){
    printf("C�LCULO DE POTENCIA��O DE UM N�MERO NATURAL\n");
}

int ler_base(){
    int x;
    printf("\nDigite aqui a base: ");
    scanf("%d", &x);
return x;
}

int ler_exp(){
    int x;
    printf("\nDigite aqui o expoente: ");
    scanf("%d", &x);
return x;
}

int calculo(int b, int e){
    int x = 1;

    for(int i = 1; i <= e; i++){
        x *= b;
    }
return x;
}

void resposta(int resultado){
    printf("O resultado da potencia��o �: %d", resultado);
}
