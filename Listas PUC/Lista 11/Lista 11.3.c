#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/***************************************************************
* Assinatura da função: apresentacao()
* Data da elaboração: 18-04-2024
* Autor: Gabriel Mayer Clary
* Objetivo: Identificar se um inteiro é par ou ímpar.
* Dados de entrada (argumentos): 92831
* Dado de saída (valor gerado pela função): É ímpar
****************************************************************
*/

void apresentacao();
int ler_numero();
bool calculo(int a);
void resposta(bool resultado);

int main(){
    apresentacao();
    int a = ler_numero();
    bool resultado = calculo(a);
    resposta(resultado);
return 0;
}

void apresentacao(){
    printf("IDENTIFICAR SE UM INTEIRO É PAR OU ÍMPAR\n");
}

int ler_numero(){
    int x;
    printf("\nDigite aqui um numero inteiro: ");
    scanf("%d", &x);
return x;
}

bool calculo(int a){
    int i;
    bool eh_par = false;
    for(i = 2; i <= a/2; i++){
        if(a % 2 == 0)
            eh_par = true;
    }
return eh_par;
}

void resposta(bool resultado){
    if(resultado)
        printf("\n\nO número inserido é par", resultado);
    else
        printf("\n\nO número inserido é ímpar", resultado);
}
