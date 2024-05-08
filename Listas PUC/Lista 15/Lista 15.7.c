#include <stdio.h>
#include <stdlib.h>

void apresentacao();
int ler_n();
long fatorial(int n);
void resposta(long resultado);

int main() {
    apresentacao();
    int n = ler_n();
    int resultado = fatorial(n);
    resposta(resultado);
return 0;
}

void apresentacao(){
    printf("Calcular o fatorial de um número n (lido), utilizando algoritimos recursivos.\n\n");
}

int ler_n(){
    int x;
    printf("Digite aqui um número natural: ");
    scanf("%i", &x);

return x;
}

long fatorial(int n){
    long fat = 0;

    if(n == 0)
        fat = 1;
    else
        fat = n * fatorial(n - 1);

return fat;
}

void resposta(long resultado){
    printf("\n\nO fatorial do número inserido é: %d", resultado);
}
