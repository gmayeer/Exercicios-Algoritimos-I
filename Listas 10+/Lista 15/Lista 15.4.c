#include <stdio.h>
#include <stdlib.h>

void apresentacao();
int ler_n();
int sequencia(int n);

int main() {
    apresentacao();
    int n = ler_n();
    sequencia(n);
return 0;
}

void apresentacao(){
    printf("Escrever em ordem decrescente os inteiros de N(lido) até 0, utilizando algoritimo recursivo\n\n");
}

int ler_n(){
    int x;
    printf("Digite aqui um número natural: ");
    scanf("%i", &x);

return x;
}

int sequencia(int n){
    if(n == 0)
        printf("%i ", n);
    else
        printf("%i, ", n);
    if(n > 0)
        n = sequencia(n-1);

return n;
}
