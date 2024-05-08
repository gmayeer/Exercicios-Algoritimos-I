#include <stdio.h>
#include <stdlib.h>

void apresentacao();
int ler_n();
int ler_m();
int sequencia(int n, int m, int soma);
void resposta(int resultado);

int main() {
    apresentacao();
    int n = ler_n();
    int m = ler_m();
    int soma = n;
    int resultado = sequencia(n, m, soma);
    resposta(resultado);
return 0;
}

void apresentacao(){
    printf("Calcular a soma dos números inteiros de n até m (lidos), utilizando algoritimo recursivo\n\n");
}

int ler_n(){
    int x;
    printf("\nDigite aqui o limite inferior da soma sequenciado: ");
    scanf("%d", &x);

return x;
}

int ler_m(){
    int y;
    printf("\nDigite aqui o limite superior da soma sequenciado: ");
    scanf("%d", &y);

return y;
}

int sequencia(int n, int m, int soma){
    if(n < m){
        soma = n + sequencia(++n, m, soma);
    }
    else
        return soma;
}

void resposta(int resultado){
    printf("\n\nA soma dos números inteiros na sequência de n até m é: %d", resultado);
}
