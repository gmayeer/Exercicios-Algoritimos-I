#include <stdio.h>
#include <stdlib.h>

void apresentacao();
int ler_b();
int ler_exp();
int potencia(int b, int exp);
void resposta(int resultado);

int main() {
    apresentacao();
    int b = ler_b();
    int exp = ler_exp();
    int resultado = potencia(b, exp);
    resposta(resultado);
return 0;
}

void apresentacao(){
    printf("Calcular a potenciação de base b e expoente exp(lidos), utilizando algoritimo recursivo\n\n");
}

int ler_b(){
    int x;
    printf("\nDigite aqui a base da potenciação: ");
    scanf("%d", &x);

return x;
}

int ler_exp(){
    int y;
    printf("\nDigite aqui o expoente da potenciação: ");
    scanf("%d", &y);

return y;
}

int potencia(int b, int exp){
    if(exp > 1)
        b = b * potencia(b, --exp);
    else
        return b;
}

void resposta(int resultado){
    printf("\n\nA soma dos números inteiros na sequência de n até m é: %d", resultado);
}
