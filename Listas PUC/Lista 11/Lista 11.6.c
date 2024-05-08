#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
/***************************************************************
* Assinatura da função: apresentacao();
* Data da elaboração: 19-04-2024
* Autor: Gabriel Mayer Clary
* Objetivo: Descobrir se um valor natural lido é primo ou não.
* Dados de entrada (argumentos): 778923
* Dado de saída (valor gerado pela função):
****************************************************************
*/

void apresentacao();
int ler_valor();
bool calculo(int a);
void resposta(bool resultado);

int main(){
    apresentacao();
    int a = ler_valor();
    bool resultado = calculo(a);
    resposta(resultado);
return 0;
}

void apresentacao(){
    printf("VERIFICAÇÃO DE NÚMERO NATURAL PRIMO\n\n");
}

int ler_valor(){
    int x;
    printf("Digite aqui um número natural: ");
    scanf("%d", &x);
return x;
}

bool calculo(int a){
    if(a % 2 == 0)
        return false;
        for(int i = 3; i <= sqrt(a); i += 2){
            if(a % i == 0)
                return false;
        }
    return true;
}

void resposta(bool resultado){
    if(resultado)
        printf("\n\nO número inserido é primo.");
    else
        printf("\n\nO número inserido não é primo.");
}
