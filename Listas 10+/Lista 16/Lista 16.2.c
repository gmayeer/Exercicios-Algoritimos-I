#include <stdio.h>
#include <stdlib.h>

/*


--->NÃO CONSEGUI FAZER AINDA<---


*/
void apresentacao();
int ler_m();
int ler_n();
int calc_func(int m, int n);
void resposta();


int main() {
    apresentacao();
    int m = ler_m();
    int n = ler_n();
    int resultado = calc_func(m, n);
    resposta(resultado);
return 0;
}

void apresentacao(){
    printf("Calcular imagens da função de Ackerman a partir da leitura das variaveis m e n, por meio de algoritimos recursivos.\n\n");
}

int ler_m(){
    int x;
    printf("Digite aqui o valor de m: ");
    scanf("%i", &x);

return x;
}

int ler_n(){
    int y;
    printf("Digite aqui o valor de n: ");
    scanf("%i", &y);

return y;
}

int calc_func(int m, int n){
    int a;
    if(m == 0)
        a = n + 1;
return a;
}


void resposta(int resultado){
    printf("\n\nA partir da função de Ackerman, o resultado é: %d", resultado);

}
